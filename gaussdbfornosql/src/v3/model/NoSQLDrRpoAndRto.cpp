

#include "huaweicloud/gaussdbfornosql/v3/model/NoSQLDrRpoAndRto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSQLDrRpoAndRto::NoSQLDrRpoAndRto()
{
    scene_ = "";
    sceneIsSet_ = false;
    rpo_ = 0L;
    rpoIsSet_ = false;
    rto_ = 0L;
    rtoIsSet_ = false;
}

NoSQLDrRpoAndRto::~NoSQLDrRpoAndRto() = default;

void NoSQLDrRpoAndRto::validate()
{
}

web::json::value NoSQLDrRpoAndRto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(rpoIsSet_) {
        val[utility::conversions::to_string_t("rpo")] = ModelBase::toJson(rpo_);
    }
    if(rtoIsSet_) {
        val[utility::conversions::to_string_t("rto")] = ModelBase::toJson(rto_);
    }

    return val;
}

bool NoSQLDrRpoAndRto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rpo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRto(refVal);
        }
    }
    return ok;
}

std::string NoSQLDrRpoAndRto::getScene() const
{
    return scene_;
}

void NoSQLDrRpoAndRto::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool NoSQLDrRpoAndRto::sceneIsSet() const
{
    return sceneIsSet_;
}

void NoSQLDrRpoAndRto::unsetscene()
{
    sceneIsSet_ = false;
}

int64_t NoSQLDrRpoAndRto::getRpo() const
{
    return rpo_;
}

void NoSQLDrRpoAndRto::setRpo(int64_t value)
{
    rpo_ = value;
    rpoIsSet_ = true;
}

bool NoSQLDrRpoAndRto::rpoIsSet() const
{
    return rpoIsSet_;
}

void NoSQLDrRpoAndRto::unsetrpo()
{
    rpoIsSet_ = false;
}

int64_t NoSQLDrRpoAndRto::getRto() const
{
    return rto_;
}

void NoSQLDrRpoAndRto::setRto(int64_t value)
{
    rto_ = value;
    rtoIsSet_ = true;
}

bool NoSQLDrRpoAndRto::rtoIsSet() const
{
    return rtoIsSet_;
}

void NoSQLDrRpoAndRto::unsetrto()
{
    rtoIsSet_ = false;
}

}
}
}
}
}


