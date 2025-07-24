
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowProgressRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowProgressRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowProgressRequest
    : public ModelBase
{
public:
    ShowProgressRequest();
    virtual ~ShowProgressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProgressRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 异步操作uri
    /// </summary>

    std::string getOperationUri() const;
    bool operationUriIsSet() const;
    void unsetoperationUri();
    void setOperationUri(const std::string& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string operationUri_;
    bool operationUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProgressRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProgressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowProgressRequest_H_
