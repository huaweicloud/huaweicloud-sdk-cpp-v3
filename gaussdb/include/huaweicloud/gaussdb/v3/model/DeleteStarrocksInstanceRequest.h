
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteStarrocksInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteStarrocksInstanceRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteStarrocksInstanceRequest
    : public ModelBase
{
public:
    DeleteStarrocksInstanceRequest();
    virtual ~DeleteStarrocksInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteStarrocksInstanceRequest members

    /// <summary>
    /// GaussDBForMySQL实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// StarRocks实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getStarrocksInstanceId() const;
    bool starrocksInstanceIdIsSet() const;
    void unsetstarrocksInstanceId();
    void setStarrocksInstanceId(const std::string& value);

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string starrocksInstanceId_;
    bool starrocksInstanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteStarrocksInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteStarrocksInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteStarrocksInstanceRequest_H_
