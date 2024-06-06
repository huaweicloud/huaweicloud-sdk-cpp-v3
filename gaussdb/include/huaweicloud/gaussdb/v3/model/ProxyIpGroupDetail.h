
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyIpGroupDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyIpGroupDetail_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/IpGroupItem.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyIpGroupDetail
    : public ModelBase
{
public:
    ProxyIpGroupDetail();
    virtual ~ProxyIpGroupDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyIpGroupDetail members

    /// <summary>
    /// ipGroup的id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// ipGroup的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// ipGroup内部的ip列表
    /// </summary>

    std::vector<IpGroupItem>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<IpGroupItem>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<IpGroupItem> ipList_;
    bool ipListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyIpGroupDetail_H_
