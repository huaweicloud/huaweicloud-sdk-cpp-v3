
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewAgencyLogAccessReqListBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewAgencyLogAccessReqListBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/PreviewAgencyLogAccessReqBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  PreviewAgencyLogAccessReqListBody
    : public ModelBase
{
public:
    PreviewAgencyLogAccessReqListBody();
    virtual ~PreviewAgencyLogAccessReqListBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreviewAgencyLogAccessReqListBody members

    /// <summary>
    /// 预览代理列表
    /// </summary>

    std::vector<PreviewAgencyLogAccessReqBody>& getPreviewAgencyList();
    bool previewAgencyListIsSet() const;
    void unsetpreviewAgencyList();
    void setPreviewAgencyList(const std::vector<PreviewAgencyLogAccessReqBody>& value);


protected:
    std::vector<PreviewAgencyLogAccessReqBody> previewAgencyList_;
    bool previewAgencyListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewAgencyLogAccessReqListBody_H_
