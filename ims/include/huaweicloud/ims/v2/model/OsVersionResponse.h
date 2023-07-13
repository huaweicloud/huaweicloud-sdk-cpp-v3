
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_OsVersionResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_OsVersionResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/Links.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询版本响应体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  OsVersionResponse
    : public ModelBase
{
public:
    OsVersionResponse();
    virtual ~OsVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OsVersionResponse members

    /// <summary>
    /// 接口状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 接口ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 自描述信息。
    /// </summary>

    std::vector<Links>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Links>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<Links> links_;
    bool linksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_OsVersionResponse_H_
