
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FavouriteResponse_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FavouriteResponse_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  FavouriteResponse_result
    : public ModelBase
{
public:
    FavouriteResponse_result();
    virtual ~FavouriteResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FavouriteResponse_result members

    /// <summary>
    /// 是否收藏任务
    /// </summary>

    bool isFavorite() const;
    bool favoriteIsSet() const;
    void unsetfavorite();
    void setFavorite(bool value);


protected:
    bool favorite_;
    bool favoriteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FavouriteResponse_result_H_
