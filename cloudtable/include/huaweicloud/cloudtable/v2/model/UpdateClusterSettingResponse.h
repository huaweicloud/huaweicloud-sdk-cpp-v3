
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_UpdateClusterSettingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_UpdateClusterSettingResponse_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  UpdateClusterSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateClusterSettingResponse();
    virtual ~UpdateClusterSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateClusterSettingResponse members

    /// <summary>
    /// 配置修改结果
    /// </summary>

    bool isModifyResult() const;
    bool modifyResultIsSet() const;
    void unsetmodifyResult();
    void setModifyResult(bool value);


protected:
    bool modifyResult_;
    bool modifyResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_UpdateClusterSettingResponse_H_
