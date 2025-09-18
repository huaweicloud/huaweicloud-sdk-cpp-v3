
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_MetricInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_MetricInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 度量项
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  MetricInfo
    : public ModelBase
{
public:
    MetricInfo();
    virtual ~MetricInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricInfo members

    /// <summary>
    /// 代码规模
    /// </summary>

    std::string getCodeSize() const;
    bool codeSizeIsSet() const;
    void unsetcodeSize();
    void setCodeSize(const std::string& value);

    /// <summary>
    /// 原始代码行数
    /// </summary>

    std::string getRawLines() const;
    bool rawLinesIsSet() const;
    void unsetrawLines();
    void setRawLines(const std::string& value);

    /// <summary>
    /// 函数总数
    /// </summary>

    std::string getMethodsTotal() const;
    bool methodsTotalIsSet() const;
    void unsetmethodsTotal();
    void setMethodsTotal(const std::string& value);

    /// <summary>
    /// 圈复杂度总数
    /// </summary>

    std::string getCyclomaticComplexityTotal() const;
    bool cyclomaticComplexityTotalIsSet() const;
    void unsetcyclomaticComplexityTotal();
    void setCyclomaticComplexityTotal(const std::string& value);

    /// <summary>
    /// 平均圈复杂度
    /// </summary>

    std::string getCyclomaticComplexityPerMethod() const;
    bool cyclomaticComplexityPerMethodIsSet() const;
    void unsetcyclomaticComplexityPerMethod();
    void setCyclomaticComplexityPerMethod(const std::string& value);

    /// <summary>
    /// 最大圈复杂度
    /// </summary>

    std::string getMaximumCyclomaticComplexity() const;
    bool maximumCyclomaticComplexityIsSet() const;
    void unsetmaximumCyclomaticComplexity();
    void setMaximumCyclomaticComplexity(const std::string& value);

    /// <summary>
    /// 超大圈复杂度数
    /// </summary>

    std::string getHugeCyclomaticComplexityTotal() const;
    bool hugeCyclomaticComplexityTotalIsSet() const;
    void unsethugeCyclomaticComplexityTotal();
    void setHugeCyclomaticComplexityTotal(const std::string& value);

    /// <summary>
    /// 超大圈复杂度比例
    /// </summary>

    std::string getHugeCyclomaticComplexityRatio() const;
    bool hugeCyclomaticComplexityRatioIsSet() const;
    void unsethugeCyclomaticComplexityRatio();
    void setHugeCyclomaticComplexityRatio(const std::string& value);

    /// <summary>
    /// cca圈复杂度总数
    /// </summary>

    std::string getCcaCyclomaticComplexityTotal() const;
    bool ccaCyclomaticComplexityTotalIsSet() const;
    void unsetccaCyclomaticComplexityTotal();
    void setCcaCyclomaticComplexityTotal(const std::string& value);

    /// <summary>
    /// cca平均圈复杂度
    /// </summary>

    std::string getCcaCyclomaticComplexityPerMethod() const;
    bool ccaCyclomaticComplexityPerMethodIsSet() const;
    void unsetccaCyclomaticComplexityPerMethod();
    void setCcaCyclomaticComplexityPerMethod(const std::string& value);

    /// <summary>
    /// cca最大圈复杂度
    /// </summary>

    std::string getMaximumCcaCyclomaticComplexity() const;
    bool maximumCcaCyclomaticComplexityIsSet() const;
    void unsetmaximumCcaCyclomaticComplexity();
    void setMaximumCcaCyclomaticComplexity(const std::string& value);

    /// <summary>
    /// 超大圈复杂度函数总数
    /// </summary>

    std::string getHugeCcaCyclomaticComplexityTotal() const;
    bool hugeCcaCyclomaticComplexityTotalIsSet() const;
    void unsethugeCcaCyclomaticComplexityTotal();
    void setHugeCcaCyclomaticComplexityTotal(const std::string& value);

    /// <summary>
    /// 圈复杂度满足度
    /// </summary>

    std::string getCyclomaticComplexityAdequacy() const;
    bool cyclomaticComplexityAdequacyIsSet() const;
    void unsetcyclomaticComplexityAdequacy();
    void setCyclomaticComplexityAdequacy(const std::string& value);

    /// <summary>
    /// 最大深度
    /// </summary>

    std::string getMaximumDepth() const;
    bool maximumDepthIsSet() const;
    void unsetmaximumDepth();
    void setMaximumDepth(const std::string& value);

    /// <summary>
    /// 超大深度数
    /// </summary>

    std::string getHugeDepthTotal() const;
    bool hugeDepthTotalIsSet() const;
    void unsethugeDepthTotal();
    void setHugeDepthTotal(const std::string& value);

    /// <summary>
    /// 超大深度占比
    /// </summary>

    std::string getHugeDepthRatio() const;
    bool hugeDepthRatioIsSet() const;
    void unsethugeDepthRatio();
    void setHugeDepthRatio(const std::string& value);

    /// <summary>
    /// 函数总行数
    /// </summary>

    std::string getMethodLines() const;
    bool methodLinesIsSet() const;
    void unsetmethodLines();
    void setMethodLines(const std::string& value);

    /// <summary>
    /// 函数平均代码行
    /// </summary>

    std::string getLinesPerMethod() const;
    bool linesPerMethodIsSet() const;
    void unsetlinesPerMethod();
    void setLinesPerMethod(const std::string& value);

    /// <summary>
    /// 超大函数数
    /// </summary>

    std::string getHugeMethodTotal() const;
    bool hugeMethodTotalIsSet() const;
    void unsethugeMethodTotal();
    void setHugeMethodTotal(const std::string& value);

    /// <summary>
    /// 超大函数占比
    /// </summary>

    std::string getHugeMethodRatio() const;
    bool hugeMethodRatioIsSet() const;
    void unsethugeMethodRatio();
    void setHugeMethodRatio(const std::string& value);

    /// <summary>
    /// 文件总数
    /// </summary>

    std::string getFilesTotal() const;
    bool filesTotalIsSet() const;
    void unsetfilesTotal();
    void setFilesTotal(const std::string& value);

    /// <summary>
    /// 目录总数
    /// </summary>

    std::string getFoldersTotal() const;
    bool foldersTotalIsSet() const;
    void unsetfoldersTotal();
    void setFoldersTotal(const std::string& value);

    /// <summary>
    /// 文件平均代码行
    /// </summary>

    std::string getLinesPerFile() const;
    bool linesPerFileIsSet() const;
    void unsetlinesPerFile();
    void setLinesPerFile(const std::string& value);

    /// <summary>
    /// 超大头文件数
    /// </summary>

    std::string getHugeHeaderfileTotal() const;
    bool hugeHeaderfileTotalIsSet() const;
    void unsethugeHeaderfileTotal();
    void setHugeHeaderfileTotal(const std::string& value);

    /// <summary>
    /// 超大头文件占比
    /// </summary>

    std::string getHugeHeaderfileRatio() const;
    bool hugeHeaderfileRatioIsSet() const;
    void unsethugeHeaderfileRatio();
    void setHugeHeaderfileRatio(const std::string& value);

    /// <summary>
    /// 超大源文件数
    /// </summary>

    std::string getHugeNonHeaderfileTotal() const;
    bool hugeNonHeaderfileTotalIsSet() const;
    void unsethugeNonHeaderfileTotal();
    void setHugeNonHeaderfileTotal(const std::string& value);

    /// <summary>
    /// 超大源文件占比
    /// </summary>

    std::string getHugeNonHeaderfileRatio() const;
    bool hugeNonHeaderfileRatioIsSet() const;
    void unsethugeNonHeaderfileRatio();
    void setHugeNonHeaderfileRatio(const std::string& value);

    /// <summary>
    /// 超大目录数
    /// </summary>

    std::string getHugeFolderTotal() const;
    bool hugeFolderTotalIsSet() const;
    void unsethugeFolderTotal();
    void setHugeFolderTotal(const std::string& value);

    /// <summary>
    /// 超大目录占比
    /// </summary>

    std::string getHugeFolderRatio() const;
    bool hugeFolderRatioIsSet() const;
    void unsethugeFolderRatio();
    void setHugeFolderRatio(const std::string& value);

    /// <summary>
    /// 重复文件数
    /// </summary>

    std::string getFileDuplicationTotal() const;
    bool fileDuplicationTotalIsSet() const;
    void unsetfileDuplicationTotal();
    void setFileDuplicationTotal(const std::string& value);

    /// <summary>
    /// 文件重复率
    /// </summary>

    std::string getFileDuplicationRatio() const;
    bool fileDuplicationRatioIsSet() const;
    void unsetfileDuplicationRatio();
    void setFileDuplicationRatio(const std::string& value);

    /// <summary>
    /// 重复源文件数
    /// </summary>

    std::string getNonHfileDuplicationTotal() const;
    bool nonHfileDuplicationTotalIsSet() const;
    void unsetnonHfileDuplicationTotal();
    void setNonHfileDuplicationTotal(const std::string& value);

    /// <summary>
    /// 源文件重复率
    /// </summary>

    std::string getNonHfileDuplicationRatio() const;
    bool nonHfileDuplicationRatioIsSet() const;
    void unsetnonHfileDuplicationRatio();
    void setNonHfileDuplicationRatio(const std::string& value);

    /// <summary>
    /// 代码重复数
    /// </summary>

    std::string getCodeDuplicationTotal() const;
    bool codeDuplicationTotalIsSet() const;
    void unsetcodeDuplicationTotal();
    void setCodeDuplicationTotal(const std::string& value);

    /// <summary>
    /// 代码重复率
    /// </summary>

    std::string getCodeDuplicationRatio() const;
    bool codeDuplicationRatioIsSet() const;
    void unsetcodeDuplicationRatio();
    void setCodeDuplicationRatio(const std::string& value);

    /// <summary>
    /// 源文件代码重复数
    /// </summary>

    std::string getNonHfileCodeDuplicationTotal() const;
    bool nonHfileCodeDuplicationTotalIsSet() const;
    void unsetnonHfileCodeDuplicationTotal();
    void setNonHfileCodeDuplicationTotal(const std::string& value);

    /// <summary>
    /// 源文件代码重复率
    /// </summary>

    std::string getNonHfileCodeDuplicationRatio() const;
    bool nonHfileCodeDuplicationRatioIsSet() const;
    void unsetnonHfileCodeDuplicationRatio();
    void setNonHfileCodeDuplicationRatio(const std::string& value);

    /// <summary>
    /// 危险函数总数
    /// </summary>

    std::string getUnsafeFunctionsTotal() const;
    bool unsafeFunctionsTotalIsSet() const;
    void unsetunsafeFunctionsTotal();
    void setUnsafeFunctionsTotal(const std::string& value);

    /// <summary>
    /// 危险函数密度
    /// </summary>

    std::string getUnsafeFunctionsKloc() const;
    bool unsafeFunctionsKlocIsSet() const;
    void unsetunsafeFunctionsKloc();
    void setUnsafeFunctionsKloc(const std::string& value);

    /// <summary>
    /// 冗余代码数
    /// </summary>

    std::string getRedundantCodeTotal() const;
    bool redundantCodeTotalIsSet() const;
    void unsetredundantCodeTotal();
    void setRedundantCodeTotal(const std::string& value);

    /// <summary>
    /// 冗余代码块密度
    /// </summary>

    std::string getRedundantCodeKloc() const;
    bool redundantCodeKlocIsSet() const;
    void unsetredundantCodeKloc();
    void setRedundantCodeKloc(const std::string& value);

    /// <summary>
    /// 抑制告警数
    /// </summary>

    std::string getWarningSuppressionTotal() const;
    bool warningSuppressionTotalIsSet() const;
    void unsetwarningSuppressionTotal();
    void setWarningSuppressionTotal(const std::string& value);

    /// <summary>
    /// 抑制告警密度
    /// </summary>

    std::string getWarningSuppressionKloc() const;
    bool warningSuppressionKlocIsSet() const;
    void unsetwarningSuppressionKloc();
    void setWarningSuppressionKloc(const std::string& value);


protected:
    std::string codeSize_;
    bool codeSizeIsSet_;
    std::string rawLines_;
    bool rawLinesIsSet_;
    std::string methodsTotal_;
    bool methodsTotalIsSet_;
    std::string cyclomaticComplexityTotal_;
    bool cyclomaticComplexityTotalIsSet_;
    std::string cyclomaticComplexityPerMethod_;
    bool cyclomaticComplexityPerMethodIsSet_;
    std::string maximumCyclomaticComplexity_;
    bool maximumCyclomaticComplexityIsSet_;
    std::string hugeCyclomaticComplexityTotal_;
    bool hugeCyclomaticComplexityTotalIsSet_;
    std::string hugeCyclomaticComplexityRatio_;
    bool hugeCyclomaticComplexityRatioIsSet_;
    std::string ccaCyclomaticComplexityTotal_;
    bool ccaCyclomaticComplexityTotalIsSet_;
    std::string ccaCyclomaticComplexityPerMethod_;
    bool ccaCyclomaticComplexityPerMethodIsSet_;
    std::string maximumCcaCyclomaticComplexity_;
    bool maximumCcaCyclomaticComplexityIsSet_;
    std::string hugeCcaCyclomaticComplexityTotal_;
    bool hugeCcaCyclomaticComplexityTotalIsSet_;
    std::string cyclomaticComplexityAdequacy_;
    bool cyclomaticComplexityAdequacyIsSet_;
    std::string maximumDepth_;
    bool maximumDepthIsSet_;
    std::string hugeDepthTotal_;
    bool hugeDepthTotalIsSet_;
    std::string hugeDepthRatio_;
    bool hugeDepthRatioIsSet_;
    std::string methodLines_;
    bool methodLinesIsSet_;
    std::string linesPerMethod_;
    bool linesPerMethodIsSet_;
    std::string hugeMethodTotal_;
    bool hugeMethodTotalIsSet_;
    std::string hugeMethodRatio_;
    bool hugeMethodRatioIsSet_;
    std::string filesTotal_;
    bool filesTotalIsSet_;
    std::string foldersTotal_;
    bool foldersTotalIsSet_;
    std::string linesPerFile_;
    bool linesPerFileIsSet_;
    std::string hugeHeaderfileTotal_;
    bool hugeHeaderfileTotalIsSet_;
    std::string hugeHeaderfileRatio_;
    bool hugeHeaderfileRatioIsSet_;
    std::string hugeNonHeaderfileTotal_;
    bool hugeNonHeaderfileTotalIsSet_;
    std::string hugeNonHeaderfileRatio_;
    bool hugeNonHeaderfileRatioIsSet_;
    std::string hugeFolderTotal_;
    bool hugeFolderTotalIsSet_;
    std::string hugeFolderRatio_;
    bool hugeFolderRatioIsSet_;
    std::string fileDuplicationTotal_;
    bool fileDuplicationTotalIsSet_;
    std::string fileDuplicationRatio_;
    bool fileDuplicationRatioIsSet_;
    std::string nonHfileDuplicationTotal_;
    bool nonHfileDuplicationTotalIsSet_;
    std::string nonHfileDuplicationRatio_;
    bool nonHfileDuplicationRatioIsSet_;
    std::string codeDuplicationTotal_;
    bool codeDuplicationTotalIsSet_;
    std::string codeDuplicationRatio_;
    bool codeDuplicationRatioIsSet_;
    std::string nonHfileCodeDuplicationTotal_;
    bool nonHfileCodeDuplicationTotalIsSet_;
    std::string nonHfileCodeDuplicationRatio_;
    bool nonHfileCodeDuplicationRatioIsSet_;
    std::string unsafeFunctionsTotal_;
    bool unsafeFunctionsTotalIsSet_;
    std::string unsafeFunctionsKloc_;
    bool unsafeFunctionsKlocIsSet_;
    std::string redundantCodeTotal_;
    bool redundantCodeTotalIsSet_;
    std::string redundantCodeKloc_;
    bool redundantCodeKlocIsSet_;
    std::string warningSuppressionTotal_;
    bool warningSuppressionTotalIsSet_;
    std::string warningSuppressionKloc_;
    bool warningSuppressionKlocIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_MetricInfo_H_
