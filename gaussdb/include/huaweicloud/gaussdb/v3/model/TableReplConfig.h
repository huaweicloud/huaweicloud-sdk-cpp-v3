
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableReplConfig_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableReplConfig_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 表同步配置。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TableReplConfig
    : public ModelBase
{
public:
    TableReplConfig();
    virtual ~TableReplConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TableReplConfig members

    /// <summary>
    /// 表同步类型。include_tables:白名单,exclude_tables:黑名单。
    /// </summary>

    std::string getReplType() const;
    bool replTypeIsSet() const;
    void unsetreplType();
    void setReplType(const std::string& value);

    /// <summary>
    /// 表同步范围。all:全量同步，part:部分同步。
    /// </summary>

    std::string getReplScope() const;
    bool replScopeIsSet() const;
    void unsetreplScope();
    void setReplScope(const std::string& value);

    /// <summary>
    /// 白名单或黑名单的表范围。
    /// </summary>

    std::vector<std::string>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<std::string>& value);


protected:
    std::string replType_;
    bool replTypeIsSet_;
    std::string replScope_;
    bool replScopeIsSet_;
    std::vector<std::string> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableReplConfig_H_
