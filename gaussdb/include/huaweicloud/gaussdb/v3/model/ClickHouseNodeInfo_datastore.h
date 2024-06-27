
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_datastore_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_datastore_H_


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
/// 数据存储信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseNodeInfo_datastore
    : public ModelBase
{
public:
    ClickHouseNodeInfo_datastore();
    virtual ~ClickHouseNodeInfo_datastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseNodeInfo_datastore members

    /// <summary>
    /// 引擎ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 引擎类型，现在只支持click-house。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 引擎版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_datastore_H_
