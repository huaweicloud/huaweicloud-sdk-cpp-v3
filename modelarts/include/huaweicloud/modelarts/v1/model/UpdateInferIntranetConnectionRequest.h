
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferIntranetConnectionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferIntranetConnectionRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UpdateIntranetConnectionRequestBody.h>
#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateInferIntranetConnectionRequest
    : public ModelBase
{
public:
    UpdateInferIntranetConnectionRequest();
    virtual ~UpdateInferIntranetConnectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInferIntranetConnectionRequest members

    /// <summary>
    /// **参数解释：** 内网接入id。id可以根据[查询当前租户的内网接入申请列表](ListInferIntranetConnectionApplications.xml)返回body的id字段得到。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateIntranetConnectionRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateIntranetConnectionRequestBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    UpdateIntranetConnectionRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInferIntranetConnectionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInferIntranetConnectionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferIntranetConnectionRequest_H_
