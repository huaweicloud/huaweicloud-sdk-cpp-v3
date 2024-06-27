
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseTableReplConfigInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseTableReplConfigInfo_H_


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
/// 表配置信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChDatabaseTableReplConfigInfo
    : public ModelBase
{
public:
    ChDatabaseTableReplConfigInfo();
    virtual ~ChDatabaseTableReplConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChDatabaseTableReplConfigInfo members

    /// <summary>
    /// 表同步类型。 取值范围： - white_list：白名单，此时表范围不能为空。 - black_list：黑名单，此时表范围为空则选择所有表。
    /// </summary>

    std::string getReplType() const;
    bool replTypeIsSet() const;
    void unsetreplType();
    void setReplType(const std::string& value);

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
    std::vector<std::string> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseTableReplConfigInfo_H_
