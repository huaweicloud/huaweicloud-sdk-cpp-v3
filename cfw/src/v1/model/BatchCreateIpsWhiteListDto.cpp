

#include "huaweicloud/cfw/v1/model/BatchCreateIpsWhiteListDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreateIpsWhiteListDto::BatchCreateIpsWhiteListDto()
{
    ipsWhiteListDtoListIsSet_ = false;
}

BatchCreateIpsWhiteListDto::~BatchCreateIpsWhiteListDto() = default;

void BatchCreateIpsWhiteListDto::validate()
{
}

web::json::value BatchCreateIpsWhiteListDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsWhiteListDtoListIsSet_) {
        val[utility::conversions::to_string_t("ips_white_list_dto_list")] = ModelBase::toJson(ipsWhiteListDtoList_);
    }

    return val;
}
bool BatchCreateIpsWhiteListDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips_white_list_dto_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_white_list_dto_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IpsWhiteListDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsWhiteListDtoList(refVal);
        }
    }
    return ok;
}


std::vector<IpsWhiteListDto>& BatchCreateIpsWhiteListDto::getIpsWhiteListDtoList()
{
    return ipsWhiteListDtoList_;
}

void BatchCreateIpsWhiteListDto::setIpsWhiteListDtoList(const std::vector<IpsWhiteListDto>& value)
{
    ipsWhiteListDtoList_ = value;
    ipsWhiteListDtoListIsSet_ = true;
}

bool BatchCreateIpsWhiteListDto::ipsWhiteListDtoListIsSet() const
{
    return ipsWhiteListDtoListIsSet_;
}

void BatchCreateIpsWhiteListDto::unsetipsWhiteListDtoList()
{
    ipsWhiteListDtoListIsSet_ = false;
}

}
}
}
}
}


