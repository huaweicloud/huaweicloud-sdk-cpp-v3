
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BindAssetResourceReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BindAssetResourceReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 绑定资源请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BindAssetResourceReq
    : public ModelBase
{
public:
    BindAssetResourceReq();
    virtual ~BindAssetResourceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindAssetResourceReq members

    /// <summary>
    /// 资产id。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 业务类型。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BindAssetResourceReq_H_
