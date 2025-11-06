

#include "huaweicloud/codeartsrepo/v4/model/BatchCreateRepositoryMemberDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchCreateRepositoryMemberDto::BatchCreateRepositoryMemberDto()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

BatchCreateRepositoryMemberDto::~BatchCreateRepositoryMemberDto() = default;

void BatchCreateRepositoryMemberDto::validate()
{
}

web::json::value BatchCreateRepositoryMemberDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool BatchCreateRepositoryMemberDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateRepositoryMemberResponseDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string BatchCreateRepositoryMemberDto::getStatus() const
{
    return status_;
}

void BatchCreateRepositoryMemberDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCreateRepositoryMemberDto::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCreateRepositoryMemberDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<CreateRepositoryMemberResponseDto>& BatchCreateRepositoryMemberDto::getResult()
{
    return result_;
}

void BatchCreateRepositoryMemberDto::setResult(const std::vector<CreateRepositoryMemberResponseDto>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchCreateRepositoryMemberDto::resultIsSet() const
{
    return resultIsSet_;
}

void BatchCreateRepositoryMemberDto::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


