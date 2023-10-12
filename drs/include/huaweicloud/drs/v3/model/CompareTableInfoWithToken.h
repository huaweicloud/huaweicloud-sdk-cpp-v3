
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTableInfoWithToken_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTableInfoWithToken_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DRS_V3_EXPORT  CompareTableInfoWithToken
    : public ModelBase
{
public:
    CompareTableInfoWithToken();
    virtual ~CompareTableInfoWithToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareTableInfoWithToken members

    /// <summary>
    /// 表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 该表的min token。
    /// </summary>

    std::string getMinToken() const;
    bool minTokenIsSet() const;
    void unsetminToken();
    void setMinToken(const std::string& value);

    /// <summary>
    /// 该表的max token。
    /// </summary>

    std::string getMaxToken() const;
    bool maxTokenIsSet() const;
    void unsetmaxToken();
    void setMaxToken(const std::string& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string minToken_;
    bool minTokenIsSet_;
    std::string maxToken_;
    bool maxTokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTableInfoWithToken_H_
