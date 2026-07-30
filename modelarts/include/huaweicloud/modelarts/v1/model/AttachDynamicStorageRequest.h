
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDynamicStorageRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDynamicStorageRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/DataVolumesReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AttachDynamicStorageRequest
    : public ModelBase
{
public:
    AttachDynamicStorageRequest();
    virtual ~AttachDynamicStorageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachDynamicStorageRequest members

    /// <summary>
    /// **参数解释**：Notebook实例ID。ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID），可通过调用[[查询Notebook实例列表接口](https://support.huaweicloud.com/api-modelarts/ListNotebooks.html#section0)](tag:hc)[[查询Notebook实例列表接口](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListNotebooks.html#section0)](tag:hk)获取。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DataVolumesReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DataVolumesReq& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    DataVolumesReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AttachDynamicStorageRequest& dereference_from_shared_ptr(std::shared_ptr<AttachDynamicStorageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDynamicStorageRequest_H_
