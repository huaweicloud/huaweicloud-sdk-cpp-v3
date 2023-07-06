
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResultDiffs_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResultDiffs_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ContentCompareDiff.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  ContentCompareResultDiffs
    : public ModelBase
{
public:
    ContentCompareResultDiffs();
    virtual ~ContentCompareResultDiffs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ContentCompareResultDiffs members

    /// <summary>
    /// 源库名称。
    /// </summary>

    std::string getSourceDbName() const;
    bool sourceDbNameIsSet() const;
    void unsetsourceDbName();
    void setSourceDbName(const std::string& value);

    /// <summary>
    /// 源库的表名称。
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 内容对比结果差异。
    /// </summary>

    std::vector<ContentCompareDiff>& getContentCompareDiff();
    bool contentCompareDiffIsSet() const;
    void unsetcontentCompareDiff();
    void setContentCompareDiff(const std::vector<ContentCompareDiff>& value);

    /// <summary>
    /// 内容对比结果差异总数。
    /// </summary>

    int32_t getContentCompareDiffCount() const;
    bool contentCompareDiffCountIsSet() const;
    void unsetcontentCompareDiffCount();
    void setContentCompareDiffCount(int32_t value);


protected:
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    std::vector<ContentCompareDiff> contentCompareDiff_;
    bool contentCompareDiffIsSet_;
    int32_t contentCompareDiffCount_;
    bool contentCompareDiffCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResultDiffs_H_
