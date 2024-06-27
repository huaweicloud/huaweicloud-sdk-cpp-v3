
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseEngineInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseEngineInfo_H_


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
/// 引擎信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseEngineInfo
    : public ModelBase
{
public:
    ClickHouseEngineInfo();
    virtual ~ClickHouseEngineInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseEngineInfo members

    /// <summary>
    /// 数据库引擎类型，现在只支持click-house。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本，可通过“HTAP查询引擎信息”获取。 一位数的大版本号。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseEngineInfo_H_
