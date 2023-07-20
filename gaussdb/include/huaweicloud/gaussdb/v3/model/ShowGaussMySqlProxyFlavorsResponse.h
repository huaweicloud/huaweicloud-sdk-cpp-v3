
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlProxyFlavorsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlProxyFlavorsResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlProxyFlavorGroups.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlProxyFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlProxyFlavorsResponse();
    virtual ~ShowGaussMySqlProxyFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowGaussMySqlProxyFlavorsResponse members

    /// <summary>
    /// 规格组信息。
    /// </summary>

    std::vector<MysqlProxyFlavorGroups>& getProxyFlavorGroups();
    bool proxyFlavorGroupsIsSet() const;
    void unsetproxyFlavorGroups();
    void setProxyFlavorGroups(const std::vector<MysqlProxyFlavorGroups>& value);


protected:
    std::vector<MysqlProxyFlavorGroups> proxyFlavorGroups_;
    bool proxyFlavorGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlProxyFlavorsResponse_H_
