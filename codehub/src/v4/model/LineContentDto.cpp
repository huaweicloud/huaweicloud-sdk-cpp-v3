

#include "huaweicloud/codehub/v4/model/LineContentDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




LineContentDto::LineContentDto()
{
    lineNO_ = 0;
    lineNOIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

LineContentDto::~LineContentDto() = default;

void LineContentDto::validate()
{
}

web::json::value LineContentDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lineNOIsSet_) {
        val[utility::conversions::to_string_t("lineNO")] = ModelBase::toJson(lineNO_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool LineContentDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lineNO"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lineNO"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNO(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


int32_t LineContentDto::getLineNO() const
{
    return lineNO_;
}

void LineContentDto::setLineNO(int32_t value)
{
    lineNO_ = value;
    lineNOIsSet_ = true;
}

bool LineContentDto::lineNOIsSet() const
{
    return lineNOIsSet_;
}

void LineContentDto::unsetlineNO()
{
    lineNOIsSet_ = false;
}

std::string LineContentDto::getContent() const
{
    return content_;
}

void LineContentDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool LineContentDto::contentIsSet() const
{
    return contentIsSet_;
}

void LineContentDto::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


