
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CloseMysqlProxyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CloseMysqlProxyRequestBody_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CloseMysqlProxyRequestBody
    : public ModelBase
{
public:
    CloseMysqlProxyRequestBody();
    virtual ~CloseMysqlProxyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CloseMysqlProxyRequestBody members

    /// <summary>
    /// 数据库代理ID列表。  如果实例只开启了一个代理，可不传该字段；如果实例开启了多个代理，则必须指定要关闭的代理。
    /// </summary>

    std::vector<std::string>& getProxyIds();
    bool proxyIdsIsSet() const;
    void unsetproxyIds();
    void setProxyIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> proxyIds_;
    bool proxyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CloseMysqlProxyRequestBody_H_
