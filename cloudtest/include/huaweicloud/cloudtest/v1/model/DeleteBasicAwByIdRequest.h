
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteBasicAwByIdRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteBasicAwByIdRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteBasicAwByIdRequest
    : public ModelBase
{
public:
    DeleteBasicAwByIdRequest();
    virtual ~DeleteBasicAwByIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBasicAwByIdRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// AW ID
    /// </summary>

    std::string getAwId() const;
    bool awIdIsSet() const;
    void unsetawId();
    void setAwId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string awId_;
    bool awIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteBasicAwByIdRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteBasicAwByIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteBasicAwByIdRequest_H_
