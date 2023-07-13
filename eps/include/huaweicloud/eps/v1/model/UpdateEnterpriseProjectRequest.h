
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_UpdateEnterpriseProjectRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_UpdateEnterpriseProjectRequest_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eps/v1/model/EnterpriseProject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  UpdateEnterpriseProjectRequest
    : public ModelBase
{
public:
    UpdateEnterpriseProjectRequest();
    virtual ~UpdateEnterpriseProjectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateEnterpriseProjectRequest members

    /// <summary>
    /// 企业项目ID，不能为0。 可以通过查询企业项目列表接口获取。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EnterpriseProject getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EnterpriseProject& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    EnterpriseProject body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateEnterpriseProjectRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateEnterpriseProjectRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_UpdateEnterpriseProjectRequest_H_
