

#include "huaweicloud/codeartspipeline/v2/model/FullStagePluginsRelationVO_addables.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




FullStagePluginsRelationVO_addables::FullStagePluginsRelationVO_addables()
{
    additionalProp1_ = false;
    additionalProp1IsSet_ = false;
    additionalProp2_ = false;
    additionalProp2IsSet_ = false;
    additionalProp3_ = false;
    additionalProp3IsSet_ = false;
}

FullStagePluginsRelationVO_addables::~FullStagePluginsRelationVO_addables() = default;

void FullStagePluginsRelationVO_addables::validate()
{
}

web::json::value FullStagePluginsRelationVO_addables::toJson() const
{
    web::json::value val = web::json::value::object();

    if(additionalProp1IsSet_) {
        val[utility::conversions::to_string_t("additionalProp1")] = ModelBase::toJson(additionalProp1_);
    }
    if(additionalProp2IsSet_) {
        val[utility::conversions::to_string_t("additionalProp2")] = ModelBase::toJson(additionalProp2_);
    }
    if(additionalProp3IsSet_) {
        val[utility::conversions::to_string_t("additionalProp3")] = ModelBase::toJson(additionalProp3_);
    }

    return val;
}
bool FullStagePluginsRelationVO_addables::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("additionalProp1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additionalProp1"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalProp1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additionalProp2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additionalProp2"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalProp2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additionalProp3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additionalProp3"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalProp3(refVal);
        }
    }
    return ok;
}


bool FullStagePluginsRelationVO_addables::isAdditionalProp1() const
{
    return additionalProp1_;
}

void FullStagePluginsRelationVO_addables::setAdditionalProp1(bool value)
{
    additionalProp1_ = value;
    additionalProp1IsSet_ = true;
}

bool FullStagePluginsRelationVO_addables::additionalProp1IsSet() const
{
    return additionalProp1IsSet_;
}

void FullStagePluginsRelationVO_addables::unsetadditionalProp1()
{
    additionalProp1IsSet_ = false;
}

bool FullStagePluginsRelationVO_addables::isAdditionalProp2() const
{
    return additionalProp2_;
}

void FullStagePluginsRelationVO_addables::setAdditionalProp2(bool value)
{
    additionalProp2_ = value;
    additionalProp2IsSet_ = true;
}

bool FullStagePluginsRelationVO_addables::additionalProp2IsSet() const
{
    return additionalProp2IsSet_;
}

void FullStagePluginsRelationVO_addables::unsetadditionalProp2()
{
    additionalProp2IsSet_ = false;
}

bool FullStagePluginsRelationVO_addables::isAdditionalProp3() const
{
    return additionalProp3_;
}

void FullStagePluginsRelationVO_addables::setAdditionalProp3(bool value)
{
    additionalProp3_ = value;
    additionalProp3IsSet_ = true;
}

bool FullStagePluginsRelationVO_addables::additionalProp3IsSet() const
{
    return additionalProp3IsSet_;
}

void FullStagePluginsRelationVO_addables::unsetadditionalProp3()
{
    additionalProp3IsSet_ = false;
}

}
}
}
}
}


