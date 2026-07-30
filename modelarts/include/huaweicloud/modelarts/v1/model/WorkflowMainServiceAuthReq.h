
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowMainServiceAuthReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowMainServiceAuthReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowConsume.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// workflow main service auth request
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowMainServiceAuthReq
    : public ModelBase
{
public:
    WorkflowMainServiceAuthReq();
    virtual ~WorkflowMainServiceAuthReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowMainServiceAuthReq members

    /// <summary>
    /// 在线服务ID。
    /// </summary>

    std::string getMainServiceId() const;
    bool mainServiceIdIsSet() const;
    void unsetmainServiceId();
    void setMainServiceId(const std::string& value);

    /// <summary>
    /// Gallery资产ID。
    /// </summary>

    std::string getContentId() const;
    bool contentIdIsSet() const;
    void unsetcontentId();
    void setContentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowConsume getConsume() const;
    bool consumeIsSet() const;
    void unsetconsume();
    void setConsume(const WorkflowConsume& value);


protected:
    std::string mainServiceId_;
    bool mainServiceIdIsSet_;
    std::string contentId_;
    bool contentIdIsSet_;
    WorkflowConsume consume_;
    bool consumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowMainServiceAuthReq_H_
