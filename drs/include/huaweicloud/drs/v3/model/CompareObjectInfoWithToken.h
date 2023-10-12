
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareObjectInfoWithToken_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareObjectInfoWithToken_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/CompareTableInfoWithToken.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CompareObjectInfoWithToken
    : public ModelBase
{
public:
    CompareObjectInfoWithToken();
    virtual ~CompareObjectInfoWithToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareObjectInfoWithToken members

    /// <summary>
    /// 库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 该库下的表信息列表（带token）。
    /// </summary>

    std::vector<CompareTableInfoWithToken>& getTableNameWithToken();
    bool tableNameWithTokenIsSet() const;
    void unsettableNameWithToken();
    void setTableNameWithToken(const std::vector<CompareTableInfoWithToken>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<CompareTableInfoWithToken> tableNameWithToken_;
    bool tableNameWithTokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareObjectInfoWithToken_H_
