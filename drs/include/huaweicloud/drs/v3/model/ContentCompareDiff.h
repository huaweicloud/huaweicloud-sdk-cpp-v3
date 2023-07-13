
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareDiff_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareDiff_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_DRS_V3_EXPORT  ContentCompareDiff
    : public ModelBase
{
public:
    ContentCompareDiff();
    virtual ~ContentCompareDiff();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ContentCompareDiff members

    /// <summary>
    /// 查询目标库的SQL。
    /// </summary>

    std::string getTargetSelectSql() const;
    bool targetSelectSqlIsSet() const;
    void unsettargetSelectSql();
    void setTargetSelectSql(const std::string& value);

    /// <summary>
    /// 查询源库的SQL。
    /// </summary>

    std::string getSourceSelectSql() const;
    bool sourceSelectSqlIsSet() const;
    void unsetsourceSelectSql();
    void setSourceSelectSql(const std::string& value);

    /// <summary>
    /// 源库KEY值列表。
    /// </summary>

    std::vector<std::string>& getSourceKeyValue();
    bool sourceKeyValueIsSet() const;
    void unsetsourceKeyValue();
    void setSourceKeyValue(const std::vector<std::string>& value);

    /// <summary>
    /// 目标库KEY值列表。
    /// </summary>

    std::vector<std::string>& getTargetKeyValue();
    bool targetKeyValueIsSet() const;
    void unsettargetKeyValue();
    void setTargetKeyValue(const std::vector<std::string>& value);


protected:
    std::string targetSelectSql_;
    bool targetSelectSqlIsSet_;
    std::string sourceSelectSql_;
    bool sourceSelectSqlIsSet_;
    std::vector<std::string> sourceKeyValue_;
    bool sourceKeyValueIsSet_;
    std::vector<std::string> targetKeyValue_;
    bool targetKeyValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareDiff_H_
