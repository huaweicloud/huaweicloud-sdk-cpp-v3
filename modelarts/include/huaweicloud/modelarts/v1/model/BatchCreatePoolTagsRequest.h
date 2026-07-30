
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchCreatePoolTagsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchCreatePoolTagsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CreateTagRequest.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchCreatePoolTagsRequest
    : public ModelBase
{
public:
    BatchCreatePoolTagsRequest();
    virtual ~BatchCreatePoolTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreatePoolTagsRequest members

    /// <summary>
    /// **参数解释**：资源池名称。取自资源池详情的metadata字段中的name的值。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTagRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTagRequest& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    CreateTagRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreatePoolTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreatePoolTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchCreatePoolTagsRequest_H_
