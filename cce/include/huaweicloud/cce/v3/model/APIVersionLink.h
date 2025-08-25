
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_APIVersionLink_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_APIVersionLink_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// API版本的URL链接信息。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  APIVersionLink
    : public ModelBase
{
public:
    APIVersionLink();
    virtual ~APIVersionLink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// APIVersionLink members

    /// <summary>
    /// API版本信息的链接。
    /// </summary>

    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);

    /// <summary>
    /// 链接属性。self：自助链接包含版本链接的资源。立即链接后使用这些链接。
    /// </summary>

    std::string getRel() const;
    bool relIsSet() const;
    void unsetrel();
    void setRel(const std::string& value);


protected:
    std::string href_;
    bool hrefIsSet_;
    std::string rel_;
    bool relIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_APIVersionLink_H_
