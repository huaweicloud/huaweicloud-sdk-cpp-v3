
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowIfTaskNameRepeatRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowIfTaskNameRepeatRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowIfTaskNameRepeatRequest
    : public ModelBase
{
public:
    ShowIfTaskNameRepeatRequest();
    virtual ~ShowIfTaskNameRepeatRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIfTaskNameRepeatRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// UUID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 查询的模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIfTaskNameRepeatRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIfTaskNameRepeatRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowIfTaskNameRepeatRequest_H_
