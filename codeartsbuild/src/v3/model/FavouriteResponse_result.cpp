

#include "huaweicloud/codeartsbuild/v3/model/FavouriteResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




FavouriteResponse_result::FavouriteResponse_result()
{
    favorite_ = false;
    favoriteIsSet_ = false;
}

FavouriteResponse_result::~FavouriteResponse_result() = default;

void FavouriteResponse_result::validate()
{
}

web::json::value FavouriteResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(favoriteIsSet_) {
        val[utility::conversions::to_string_t("favorite")] = ModelBase::toJson(favorite_);
    }

    return val;
}
bool FavouriteResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favorite"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavorite(refVal);
        }
    }
    return ok;
}


bool FavouriteResponse_result::isFavorite() const
{
    return favorite_;
}

void FavouriteResponse_result::setFavorite(bool value)
{
    favorite_ = value;
    favoriteIsSet_ = true;
}

bool FavouriteResponse_result::favoriteIsSet() const
{
    return favoriteIsSet_;
}

void FavouriteResponse_result::unsetfavorite()
{
    favoriteIsSet_ = false;
}

}
}
}
}
}


