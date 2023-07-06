
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentCompareDetailInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentCompareDetailInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 内容对比详情信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ContentCompareDetailInfo
    : public ModelBase
{
public:
    ContentCompareDetailInfo();
    virtual ~ContentCompareDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ContentCompareDetailInfo members

    /// <summary>
    /// 源库库名。
    /// </summary>

    std::string getSourceDb() const;
    bool sourceDbIsSet() const;
    void unsetsourceDb();
    void setSourceDb(const std::string& value);

    /// <summary>
    /// 目标库库名。
    /// </summary>

    std::string getTargetDb() const;
    bool targetDbIsSet() const;
    void unsettargetDb();
    void setTargetDb(const std::string& value);

    /// <summary>
    /// 源库表名。
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 目标库表名。
    /// </summary>

    std::string getTargetTableName() const;
    bool targetTableNameIsSet() const;
    void unsettargetTableName();
    void setTargetTableName(const std::string& value);

    /// <summary>
    /// 源库表行数。
    /// </summary>

    int64_t getSourceRowNum() const;
    bool sourceRowNumIsSet() const;
    void unsetsourceRowNum();
    void setSourceRowNum(int64_t value);

    /// <summary>
    /// 目标库表行数。
    /// </summary>

    int64_t getTargetRowNum() const;
    bool targetRowNumIsSet() const;
    void unsettargetRowNum();
    void setTargetRowNum(int64_t value);

    /// <summary>
    /// 对比不一致行数。
    /// </summary>

    int64_t getDifferenceRowNum() const;
    bool differenceRowNumIsSet() const;
    void unsetdifferenceRowNum();
    void setDifferenceRowNum(int64_t value);

    /// <summary>
    /// 行对比结果。取值： - true：一致。 - false：不一致。
    /// </summary>

    bool isLineCompareResult() const;
    bool lineCompareResultIsSet() const;
    void unsetlineCompareResult();
    void setLineCompareResult(bool value);

    /// <summary>
    /// 内容对比结果。取值： - true：一致。 - false：不一致。
    /// </summary>

    bool isContentCompareResult() const;
    bool contentCompareResultIsSet() const;
    void unsetcontentCompareResult();
    void setContentCompareResult(bool value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string sourceDb_;
    bool sourceDbIsSet_;
    std::string targetDb_;
    bool targetDbIsSet_;
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    std::string targetTableName_;
    bool targetTableNameIsSet_;
    int64_t sourceRowNum_;
    bool sourceRowNumIsSet_;
    int64_t targetRowNum_;
    bool targetRowNumIsSet_;
    int64_t differenceRowNum_;
    bool differenceRowNumIsSet_;
    bool lineCompareResult_;
    bool lineCompareResultIsSet_;
    bool contentCompareResult_;
    bool contentCompareResultIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentCompareDetailInfo_H_
