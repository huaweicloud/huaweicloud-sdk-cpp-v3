

#include "huaweicloud/codeartscheck/v2/model/MetricInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




MetricInfo::MetricInfo()
{
    codeSize_ = "";
    codeSizeIsSet_ = false;
    rawLines_ = "";
    rawLinesIsSet_ = false;
    methodsTotal_ = "";
    methodsTotalIsSet_ = false;
    cyclomaticComplexityTotal_ = "";
    cyclomaticComplexityTotalIsSet_ = false;
    cyclomaticComplexityPerMethod_ = "";
    cyclomaticComplexityPerMethodIsSet_ = false;
    maximumCyclomaticComplexity_ = "";
    maximumCyclomaticComplexityIsSet_ = false;
    hugeCyclomaticComplexityTotal_ = "";
    hugeCyclomaticComplexityTotalIsSet_ = false;
    hugeCyclomaticComplexityRatio_ = "";
    hugeCyclomaticComplexityRatioIsSet_ = false;
    ccaCyclomaticComplexityTotal_ = "";
    ccaCyclomaticComplexityTotalIsSet_ = false;
    ccaCyclomaticComplexityPerMethod_ = "";
    ccaCyclomaticComplexityPerMethodIsSet_ = false;
    maximumCcaCyclomaticComplexity_ = "";
    maximumCcaCyclomaticComplexityIsSet_ = false;
    hugeCcaCyclomaticComplexityTotal_ = "";
    hugeCcaCyclomaticComplexityTotalIsSet_ = false;
    cyclomaticComplexityAdequacy_ = "";
    cyclomaticComplexityAdequacyIsSet_ = false;
    maximumDepth_ = "";
    maximumDepthIsSet_ = false;
    hugeDepthTotal_ = "";
    hugeDepthTotalIsSet_ = false;
    hugeDepthRatio_ = "";
    hugeDepthRatioIsSet_ = false;
    methodLines_ = "";
    methodLinesIsSet_ = false;
    linesPerMethod_ = "";
    linesPerMethodIsSet_ = false;
    hugeMethodTotal_ = "";
    hugeMethodTotalIsSet_ = false;
    hugeMethodRatio_ = "";
    hugeMethodRatioIsSet_ = false;
    filesTotal_ = "";
    filesTotalIsSet_ = false;
    foldersTotal_ = "";
    foldersTotalIsSet_ = false;
    linesPerFile_ = "";
    linesPerFileIsSet_ = false;
    hugeHeaderfileTotal_ = "";
    hugeHeaderfileTotalIsSet_ = false;
    hugeHeaderfileRatio_ = "";
    hugeHeaderfileRatioIsSet_ = false;
    hugeNonHeaderfileTotal_ = "";
    hugeNonHeaderfileTotalIsSet_ = false;
    hugeNonHeaderfileRatio_ = "";
    hugeNonHeaderfileRatioIsSet_ = false;
    hugeFolderTotal_ = "";
    hugeFolderTotalIsSet_ = false;
    hugeFolderRatio_ = "";
    hugeFolderRatioIsSet_ = false;
    fileDuplicationTotal_ = "";
    fileDuplicationTotalIsSet_ = false;
    fileDuplicationRatio_ = "";
    fileDuplicationRatioIsSet_ = false;
    nonHfileDuplicationTotal_ = "";
    nonHfileDuplicationTotalIsSet_ = false;
    nonHfileDuplicationRatio_ = "";
    nonHfileDuplicationRatioIsSet_ = false;
    codeDuplicationTotal_ = "";
    codeDuplicationTotalIsSet_ = false;
    codeDuplicationRatio_ = "";
    codeDuplicationRatioIsSet_ = false;
    nonHfileCodeDuplicationTotal_ = "";
    nonHfileCodeDuplicationTotalIsSet_ = false;
    nonHfileCodeDuplicationRatio_ = "";
    nonHfileCodeDuplicationRatioIsSet_ = false;
    unsafeFunctionsTotal_ = "";
    unsafeFunctionsTotalIsSet_ = false;
    unsafeFunctionsKloc_ = "";
    unsafeFunctionsKlocIsSet_ = false;
    redundantCodeTotal_ = "";
    redundantCodeTotalIsSet_ = false;
    redundantCodeKloc_ = "";
    redundantCodeKlocIsSet_ = false;
    warningSuppressionTotal_ = "";
    warningSuppressionTotalIsSet_ = false;
    warningSuppressionKloc_ = "";
    warningSuppressionKlocIsSet_ = false;
}

MetricInfo::~MetricInfo() = default;

void MetricInfo::validate()
{
}

web::json::value MetricInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeSizeIsSet_) {
        val[utility::conversions::to_string_t("code_size")] = ModelBase::toJson(codeSize_);
    }
    if(rawLinesIsSet_) {
        val[utility::conversions::to_string_t("raw_lines")] = ModelBase::toJson(rawLines_);
    }
    if(methodsTotalIsSet_) {
        val[utility::conversions::to_string_t("methods_total")] = ModelBase::toJson(methodsTotal_);
    }
    if(cyclomaticComplexityTotalIsSet_) {
        val[utility::conversions::to_string_t("cyclomatic_complexity_total")] = ModelBase::toJson(cyclomaticComplexityTotal_);
    }
    if(cyclomaticComplexityPerMethodIsSet_) {
        val[utility::conversions::to_string_t("cyclomatic_complexity_per_method")] = ModelBase::toJson(cyclomaticComplexityPerMethod_);
    }
    if(maximumCyclomaticComplexityIsSet_) {
        val[utility::conversions::to_string_t("maximum_cyclomatic_complexity")] = ModelBase::toJson(maximumCyclomaticComplexity_);
    }
    if(hugeCyclomaticComplexityTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_cyclomatic_complexity_total")] = ModelBase::toJson(hugeCyclomaticComplexityTotal_);
    }
    if(hugeCyclomaticComplexityRatioIsSet_) {
        val[utility::conversions::to_string_t("huge_cyclomatic_complexity_ratio")] = ModelBase::toJson(hugeCyclomaticComplexityRatio_);
    }
    if(ccaCyclomaticComplexityTotalIsSet_) {
        val[utility::conversions::to_string_t("cca_cyclomatic_complexity_total")] = ModelBase::toJson(ccaCyclomaticComplexityTotal_);
    }
    if(ccaCyclomaticComplexityPerMethodIsSet_) {
        val[utility::conversions::to_string_t("cca_cyclomatic_complexity_per_method")] = ModelBase::toJson(ccaCyclomaticComplexityPerMethod_);
    }
    if(maximumCcaCyclomaticComplexityIsSet_) {
        val[utility::conversions::to_string_t("maximum_cca_cyclomatic_complexity")] = ModelBase::toJson(maximumCcaCyclomaticComplexity_);
    }
    if(hugeCcaCyclomaticComplexityTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_cca_cyclomatic_complexity_total")] = ModelBase::toJson(hugeCcaCyclomaticComplexityTotal_);
    }
    if(cyclomaticComplexityAdequacyIsSet_) {
        val[utility::conversions::to_string_t("cyclomatic_complexity_adequacy")] = ModelBase::toJson(cyclomaticComplexityAdequacy_);
    }
    if(maximumDepthIsSet_) {
        val[utility::conversions::to_string_t("maximum_depth")] = ModelBase::toJson(maximumDepth_);
    }
    if(hugeDepthTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_depth_total")] = ModelBase::toJson(hugeDepthTotal_);
    }
    if(hugeDepthRatioIsSet_) {
        val[utility::conversions::to_string_t("huge_depth_ratio")] = ModelBase::toJson(hugeDepthRatio_);
    }
    if(methodLinesIsSet_) {
        val[utility::conversions::to_string_t("method_lines")] = ModelBase::toJson(methodLines_);
    }
    if(linesPerMethodIsSet_) {
        val[utility::conversions::to_string_t("lines_per_method")] = ModelBase::toJson(linesPerMethod_);
    }
    if(hugeMethodTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_method_total")] = ModelBase::toJson(hugeMethodTotal_);
    }
    if(hugeMethodRatioIsSet_) {
        val[utility::conversions::to_string_t("huge_method_ratio")] = ModelBase::toJson(hugeMethodRatio_);
    }
    if(filesTotalIsSet_) {
        val[utility::conversions::to_string_t("files_total")] = ModelBase::toJson(filesTotal_);
    }
    if(foldersTotalIsSet_) {
        val[utility::conversions::to_string_t("folders_total")] = ModelBase::toJson(foldersTotal_);
    }
    if(linesPerFileIsSet_) {
        val[utility::conversions::to_string_t("lines_per_file")] = ModelBase::toJson(linesPerFile_);
    }
    if(hugeHeaderfileTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_headerfile_total")] = ModelBase::toJson(hugeHeaderfileTotal_);
    }
    if(hugeHeaderfileRatioIsSet_) {
        val[utility::conversions::to_string_t("huge_headerfile_ratio")] = ModelBase::toJson(hugeHeaderfileRatio_);
    }
    if(hugeNonHeaderfileTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_non_headerfile_total")] = ModelBase::toJson(hugeNonHeaderfileTotal_);
    }
    if(hugeNonHeaderfileRatioIsSet_) {
        val[utility::conversions::to_string_t("huge_non_headerfile_ratio")] = ModelBase::toJson(hugeNonHeaderfileRatio_);
    }
    if(hugeFolderTotalIsSet_) {
        val[utility::conversions::to_string_t("huge_folder_total")] = ModelBase::toJson(hugeFolderTotal_);
    }
    if(hugeFolderRatioIsSet_) {
        val[utility::conversions::to_string_t("huge_folder_ratio")] = ModelBase::toJson(hugeFolderRatio_);
    }
    if(fileDuplicationTotalIsSet_) {
        val[utility::conversions::to_string_t("file_duplication_total")] = ModelBase::toJson(fileDuplicationTotal_);
    }
    if(fileDuplicationRatioIsSet_) {
        val[utility::conversions::to_string_t("file_duplication_ratio")] = ModelBase::toJson(fileDuplicationRatio_);
    }
    if(nonHfileDuplicationTotalIsSet_) {
        val[utility::conversions::to_string_t("non_hfile_duplication_total")] = ModelBase::toJson(nonHfileDuplicationTotal_);
    }
    if(nonHfileDuplicationRatioIsSet_) {
        val[utility::conversions::to_string_t("non_hfile_duplication_ratio")] = ModelBase::toJson(nonHfileDuplicationRatio_);
    }
    if(codeDuplicationTotalIsSet_) {
        val[utility::conversions::to_string_t("code_duplication_total")] = ModelBase::toJson(codeDuplicationTotal_);
    }
    if(codeDuplicationRatioIsSet_) {
        val[utility::conversions::to_string_t("code_duplication_ratio")] = ModelBase::toJson(codeDuplicationRatio_);
    }
    if(nonHfileCodeDuplicationTotalIsSet_) {
        val[utility::conversions::to_string_t("non_hfile_code_duplication_total")] = ModelBase::toJson(nonHfileCodeDuplicationTotal_);
    }
    if(nonHfileCodeDuplicationRatioIsSet_) {
        val[utility::conversions::to_string_t("non_hfile_code_duplication_ratio")] = ModelBase::toJson(nonHfileCodeDuplicationRatio_);
    }
    if(unsafeFunctionsTotalIsSet_) {
        val[utility::conversions::to_string_t("unsafe_functions_total")] = ModelBase::toJson(unsafeFunctionsTotal_);
    }
    if(unsafeFunctionsKlocIsSet_) {
        val[utility::conversions::to_string_t("unsafe_functions_kloc")] = ModelBase::toJson(unsafeFunctionsKloc_);
    }
    if(redundantCodeTotalIsSet_) {
        val[utility::conversions::to_string_t("redundant_code_total")] = ModelBase::toJson(redundantCodeTotal_);
    }
    if(redundantCodeKlocIsSet_) {
        val[utility::conversions::to_string_t("redundant_code_kloc")] = ModelBase::toJson(redundantCodeKloc_);
    }
    if(warningSuppressionTotalIsSet_) {
        val[utility::conversions::to_string_t("warning_suppression_total")] = ModelBase::toJson(warningSuppressionTotal_);
    }
    if(warningSuppressionKlocIsSet_) {
        val[utility::conversions::to_string_t("warning_suppression_kloc")] = ModelBase::toJson(warningSuppressionKloc_);
    }

    return val;
}
bool MetricInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("raw_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("raw_lines"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRawLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("methods_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("methods_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethodsTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cyclomatic_complexity_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cyclomatic_complexity_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCyclomaticComplexityTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cyclomatic_complexity_per_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cyclomatic_complexity_per_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCyclomaticComplexityPerMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_cyclomatic_complexity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_cyclomatic_complexity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumCyclomaticComplexity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_cyclomatic_complexity_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_cyclomatic_complexity_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeCyclomaticComplexityTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_cyclomatic_complexity_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_cyclomatic_complexity_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeCyclomaticComplexityRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cca_cyclomatic_complexity_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cca_cyclomatic_complexity_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcaCyclomaticComplexityTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cca_cyclomatic_complexity_per_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cca_cyclomatic_complexity_per_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcaCyclomaticComplexityPerMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_cca_cyclomatic_complexity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_cca_cyclomatic_complexity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumCcaCyclomaticComplexity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_cca_cyclomatic_complexity_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_cca_cyclomatic_complexity_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeCcaCyclomaticComplexityTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cyclomatic_complexity_adequacy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cyclomatic_complexity_adequacy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCyclomaticComplexityAdequacy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_depth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_depth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumDepth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_depth_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_depth_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeDepthTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_depth_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_depth_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeDepthRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method_lines"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethodLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines_per_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines_per_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinesPerMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_method_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_method_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeMethodTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_method_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_method_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeMethodRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folders_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folders_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoldersTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines_per_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines_per_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinesPerFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_headerfile_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_headerfile_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeHeaderfileTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_headerfile_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_headerfile_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeHeaderfileRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_non_headerfile_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_non_headerfile_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeNonHeaderfileTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_non_headerfile_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_non_headerfile_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeNonHeaderfileRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_folder_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_folder_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeFolderTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huge_folder_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huge_folder_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHugeFolderRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_duplication_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_duplication_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileDuplicationTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_duplication_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_duplication_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileDuplicationRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("non_hfile_duplication_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("non_hfile_duplication_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonHfileDuplicationTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("non_hfile_duplication_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("non_hfile_duplication_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonHfileDuplicationRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_duplication_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_duplication_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeDuplicationTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_duplication_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_duplication_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeDuplicationRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("non_hfile_code_duplication_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("non_hfile_code_duplication_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonHfileCodeDuplicationTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("non_hfile_code_duplication_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("non_hfile_code_duplication_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonHfileCodeDuplicationRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unsafe_functions_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unsafe_functions_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnsafeFunctionsTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unsafe_functions_kloc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unsafe_functions_kloc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnsafeFunctionsKloc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redundant_code_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redundant_code_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedundantCodeTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redundant_code_kloc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redundant_code_kloc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedundantCodeKloc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warning_suppression_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warning_suppression_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningSuppressionTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warning_suppression_kloc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warning_suppression_kloc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningSuppressionKloc(refVal);
        }
    }
    return ok;
}


std::string MetricInfo::getCodeSize() const
{
    return codeSize_;
}

void MetricInfo::setCodeSize(const std::string& value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool MetricInfo::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void MetricInfo::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string MetricInfo::getRawLines() const
{
    return rawLines_;
}

void MetricInfo::setRawLines(const std::string& value)
{
    rawLines_ = value;
    rawLinesIsSet_ = true;
}

bool MetricInfo::rawLinesIsSet() const
{
    return rawLinesIsSet_;
}

void MetricInfo::unsetrawLines()
{
    rawLinesIsSet_ = false;
}

std::string MetricInfo::getMethodsTotal() const
{
    return methodsTotal_;
}

void MetricInfo::setMethodsTotal(const std::string& value)
{
    methodsTotal_ = value;
    methodsTotalIsSet_ = true;
}

bool MetricInfo::methodsTotalIsSet() const
{
    return methodsTotalIsSet_;
}

void MetricInfo::unsetmethodsTotal()
{
    methodsTotalIsSet_ = false;
}

std::string MetricInfo::getCyclomaticComplexityTotal() const
{
    return cyclomaticComplexityTotal_;
}

void MetricInfo::setCyclomaticComplexityTotal(const std::string& value)
{
    cyclomaticComplexityTotal_ = value;
    cyclomaticComplexityTotalIsSet_ = true;
}

bool MetricInfo::cyclomaticComplexityTotalIsSet() const
{
    return cyclomaticComplexityTotalIsSet_;
}

void MetricInfo::unsetcyclomaticComplexityTotal()
{
    cyclomaticComplexityTotalIsSet_ = false;
}

std::string MetricInfo::getCyclomaticComplexityPerMethod() const
{
    return cyclomaticComplexityPerMethod_;
}

void MetricInfo::setCyclomaticComplexityPerMethod(const std::string& value)
{
    cyclomaticComplexityPerMethod_ = value;
    cyclomaticComplexityPerMethodIsSet_ = true;
}

bool MetricInfo::cyclomaticComplexityPerMethodIsSet() const
{
    return cyclomaticComplexityPerMethodIsSet_;
}

void MetricInfo::unsetcyclomaticComplexityPerMethod()
{
    cyclomaticComplexityPerMethodIsSet_ = false;
}

std::string MetricInfo::getMaximumCyclomaticComplexity() const
{
    return maximumCyclomaticComplexity_;
}

void MetricInfo::setMaximumCyclomaticComplexity(const std::string& value)
{
    maximumCyclomaticComplexity_ = value;
    maximumCyclomaticComplexityIsSet_ = true;
}

bool MetricInfo::maximumCyclomaticComplexityIsSet() const
{
    return maximumCyclomaticComplexityIsSet_;
}

void MetricInfo::unsetmaximumCyclomaticComplexity()
{
    maximumCyclomaticComplexityIsSet_ = false;
}

std::string MetricInfo::getHugeCyclomaticComplexityTotal() const
{
    return hugeCyclomaticComplexityTotal_;
}

void MetricInfo::setHugeCyclomaticComplexityTotal(const std::string& value)
{
    hugeCyclomaticComplexityTotal_ = value;
    hugeCyclomaticComplexityTotalIsSet_ = true;
}

bool MetricInfo::hugeCyclomaticComplexityTotalIsSet() const
{
    return hugeCyclomaticComplexityTotalIsSet_;
}

void MetricInfo::unsethugeCyclomaticComplexityTotal()
{
    hugeCyclomaticComplexityTotalIsSet_ = false;
}

std::string MetricInfo::getHugeCyclomaticComplexityRatio() const
{
    return hugeCyclomaticComplexityRatio_;
}

void MetricInfo::setHugeCyclomaticComplexityRatio(const std::string& value)
{
    hugeCyclomaticComplexityRatio_ = value;
    hugeCyclomaticComplexityRatioIsSet_ = true;
}

bool MetricInfo::hugeCyclomaticComplexityRatioIsSet() const
{
    return hugeCyclomaticComplexityRatioIsSet_;
}

void MetricInfo::unsethugeCyclomaticComplexityRatio()
{
    hugeCyclomaticComplexityRatioIsSet_ = false;
}

std::string MetricInfo::getCcaCyclomaticComplexityTotal() const
{
    return ccaCyclomaticComplexityTotal_;
}

void MetricInfo::setCcaCyclomaticComplexityTotal(const std::string& value)
{
    ccaCyclomaticComplexityTotal_ = value;
    ccaCyclomaticComplexityTotalIsSet_ = true;
}

bool MetricInfo::ccaCyclomaticComplexityTotalIsSet() const
{
    return ccaCyclomaticComplexityTotalIsSet_;
}

void MetricInfo::unsetccaCyclomaticComplexityTotal()
{
    ccaCyclomaticComplexityTotalIsSet_ = false;
}

std::string MetricInfo::getCcaCyclomaticComplexityPerMethod() const
{
    return ccaCyclomaticComplexityPerMethod_;
}

void MetricInfo::setCcaCyclomaticComplexityPerMethod(const std::string& value)
{
    ccaCyclomaticComplexityPerMethod_ = value;
    ccaCyclomaticComplexityPerMethodIsSet_ = true;
}

bool MetricInfo::ccaCyclomaticComplexityPerMethodIsSet() const
{
    return ccaCyclomaticComplexityPerMethodIsSet_;
}

void MetricInfo::unsetccaCyclomaticComplexityPerMethod()
{
    ccaCyclomaticComplexityPerMethodIsSet_ = false;
}

std::string MetricInfo::getMaximumCcaCyclomaticComplexity() const
{
    return maximumCcaCyclomaticComplexity_;
}

void MetricInfo::setMaximumCcaCyclomaticComplexity(const std::string& value)
{
    maximumCcaCyclomaticComplexity_ = value;
    maximumCcaCyclomaticComplexityIsSet_ = true;
}

bool MetricInfo::maximumCcaCyclomaticComplexityIsSet() const
{
    return maximumCcaCyclomaticComplexityIsSet_;
}

void MetricInfo::unsetmaximumCcaCyclomaticComplexity()
{
    maximumCcaCyclomaticComplexityIsSet_ = false;
}

std::string MetricInfo::getHugeCcaCyclomaticComplexityTotal() const
{
    return hugeCcaCyclomaticComplexityTotal_;
}

void MetricInfo::setHugeCcaCyclomaticComplexityTotal(const std::string& value)
{
    hugeCcaCyclomaticComplexityTotal_ = value;
    hugeCcaCyclomaticComplexityTotalIsSet_ = true;
}

bool MetricInfo::hugeCcaCyclomaticComplexityTotalIsSet() const
{
    return hugeCcaCyclomaticComplexityTotalIsSet_;
}

void MetricInfo::unsethugeCcaCyclomaticComplexityTotal()
{
    hugeCcaCyclomaticComplexityTotalIsSet_ = false;
}

std::string MetricInfo::getCyclomaticComplexityAdequacy() const
{
    return cyclomaticComplexityAdequacy_;
}

void MetricInfo::setCyclomaticComplexityAdequacy(const std::string& value)
{
    cyclomaticComplexityAdequacy_ = value;
    cyclomaticComplexityAdequacyIsSet_ = true;
}

bool MetricInfo::cyclomaticComplexityAdequacyIsSet() const
{
    return cyclomaticComplexityAdequacyIsSet_;
}

void MetricInfo::unsetcyclomaticComplexityAdequacy()
{
    cyclomaticComplexityAdequacyIsSet_ = false;
}

std::string MetricInfo::getMaximumDepth() const
{
    return maximumDepth_;
}

void MetricInfo::setMaximumDepth(const std::string& value)
{
    maximumDepth_ = value;
    maximumDepthIsSet_ = true;
}

bool MetricInfo::maximumDepthIsSet() const
{
    return maximumDepthIsSet_;
}

void MetricInfo::unsetmaximumDepth()
{
    maximumDepthIsSet_ = false;
}

std::string MetricInfo::getHugeDepthTotal() const
{
    return hugeDepthTotal_;
}

void MetricInfo::setHugeDepthTotal(const std::string& value)
{
    hugeDepthTotal_ = value;
    hugeDepthTotalIsSet_ = true;
}

bool MetricInfo::hugeDepthTotalIsSet() const
{
    return hugeDepthTotalIsSet_;
}

void MetricInfo::unsethugeDepthTotal()
{
    hugeDepthTotalIsSet_ = false;
}

std::string MetricInfo::getHugeDepthRatio() const
{
    return hugeDepthRatio_;
}

void MetricInfo::setHugeDepthRatio(const std::string& value)
{
    hugeDepthRatio_ = value;
    hugeDepthRatioIsSet_ = true;
}

bool MetricInfo::hugeDepthRatioIsSet() const
{
    return hugeDepthRatioIsSet_;
}

void MetricInfo::unsethugeDepthRatio()
{
    hugeDepthRatioIsSet_ = false;
}

std::string MetricInfo::getMethodLines() const
{
    return methodLines_;
}

void MetricInfo::setMethodLines(const std::string& value)
{
    methodLines_ = value;
    methodLinesIsSet_ = true;
}

bool MetricInfo::methodLinesIsSet() const
{
    return methodLinesIsSet_;
}

void MetricInfo::unsetmethodLines()
{
    methodLinesIsSet_ = false;
}

std::string MetricInfo::getLinesPerMethod() const
{
    return linesPerMethod_;
}

void MetricInfo::setLinesPerMethod(const std::string& value)
{
    linesPerMethod_ = value;
    linesPerMethodIsSet_ = true;
}

bool MetricInfo::linesPerMethodIsSet() const
{
    return linesPerMethodIsSet_;
}

void MetricInfo::unsetlinesPerMethod()
{
    linesPerMethodIsSet_ = false;
}

std::string MetricInfo::getHugeMethodTotal() const
{
    return hugeMethodTotal_;
}

void MetricInfo::setHugeMethodTotal(const std::string& value)
{
    hugeMethodTotal_ = value;
    hugeMethodTotalIsSet_ = true;
}

bool MetricInfo::hugeMethodTotalIsSet() const
{
    return hugeMethodTotalIsSet_;
}

void MetricInfo::unsethugeMethodTotal()
{
    hugeMethodTotalIsSet_ = false;
}

std::string MetricInfo::getHugeMethodRatio() const
{
    return hugeMethodRatio_;
}

void MetricInfo::setHugeMethodRatio(const std::string& value)
{
    hugeMethodRatio_ = value;
    hugeMethodRatioIsSet_ = true;
}

bool MetricInfo::hugeMethodRatioIsSet() const
{
    return hugeMethodRatioIsSet_;
}

void MetricInfo::unsethugeMethodRatio()
{
    hugeMethodRatioIsSet_ = false;
}

std::string MetricInfo::getFilesTotal() const
{
    return filesTotal_;
}

void MetricInfo::setFilesTotal(const std::string& value)
{
    filesTotal_ = value;
    filesTotalIsSet_ = true;
}

bool MetricInfo::filesTotalIsSet() const
{
    return filesTotalIsSet_;
}

void MetricInfo::unsetfilesTotal()
{
    filesTotalIsSet_ = false;
}

std::string MetricInfo::getFoldersTotal() const
{
    return foldersTotal_;
}

void MetricInfo::setFoldersTotal(const std::string& value)
{
    foldersTotal_ = value;
    foldersTotalIsSet_ = true;
}

bool MetricInfo::foldersTotalIsSet() const
{
    return foldersTotalIsSet_;
}

void MetricInfo::unsetfoldersTotal()
{
    foldersTotalIsSet_ = false;
}

std::string MetricInfo::getLinesPerFile() const
{
    return linesPerFile_;
}

void MetricInfo::setLinesPerFile(const std::string& value)
{
    linesPerFile_ = value;
    linesPerFileIsSet_ = true;
}

bool MetricInfo::linesPerFileIsSet() const
{
    return linesPerFileIsSet_;
}

void MetricInfo::unsetlinesPerFile()
{
    linesPerFileIsSet_ = false;
}

std::string MetricInfo::getHugeHeaderfileTotal() const
{
    return hugeHeaderfileTotal_;
}

void MetricInfo::setHugeHeaderfileTotal(const std::string& value)
{
    hugeHeaderfileTotal_ = value;
    hugeHeaderfileTotalIsSet_ = true;
}

bool MetricInfo::hugeHeaderfileTotalIsSet() const
{
    return hugeHeaderfileTotalIsSet_;
}

void MetricInfo::unsethugeHeaderfileTotal()
{
    hugeHeaderfileTotalIsSet_ = false;
}

std::string MetricInfo::getHugeHeaderfileRatio() const
{
    return hugeHeaderfileRatio_;
}

void MetricInfo::setHugeHeaderfileRatio(const std::string& value)
{
    hugeHeaderfileRatio_ = value;
    hugeHeaderfileRatioIsSet_ = true;
}

bool MetricInfo::hugeHeaderfileRatioIsSet() const
{
    return hugeHeaderfileRatioIsSet_;
}

void MetricInfo::unsethugeHeaderfileRatio()
{
    hugeHeaderfileRatioIsSet_ = false;
}

std::string MetricInfo::getHugeNonHeaderfileTotal() const
{
    return hugeNonHeaderfileTotal_;
}

void MetricInfo::setHugeNonHeaderfileTotal(const std::string& value)
{
    hugeNonHeaderfileTotal_ = value;
    hugeNonHeaderfileTotalIsSet_ = true;
}

bool MetricInfo::hugeNonHeaderfileTotalIsSet() const
{
    return hugeNonHeaderfileTotalIsSet_;
}

void MetricInfo::unsethugeNonHeaderfileTotal()
{
    hugeNonHeaderfileTotalIsSet_ = false;
}

std::string MetricInfo::getHugeNonHeaderfileRatio() const
{
    return hugeNonHeaderfileRatio_;
}

void MetricInfo::setHugeNonHeaderfileRatio(const std::string& value)
{
    hugeNonHeaderfileRatio_ = value;
    hugeNonHeaderfileRatioIsSet_ = true;
}

bool MetricInfo::hugeNonHeaderfileRatioIsSet() const
{
    return hugeNonHeaderfileRatioIsSet_;
}

void MetricInfo::unsethugeNonHeaderfileRatio()
{
    hugeNonHeaderfileRatioIsSet_ = false;
}

std::string MetricInfo::getHugeFolderTotal() const
{
    return hugeFolderTotal_;
}

void MetricInfo::setHugeFolderTotal(const std::string& value)
{
    hugeFolderTotal_ = value;
    hugeFolderTotalIsSet_ = true;
}

bool MetricInfo::hugeFolderTotalIsSet() const
{
    return hugeFolderTotalIsSet_;
}

void MetricInfo::unsethugeFolderTotal()
{
    hugeFolderTotalIsSet_ = false;
}

std::string MetricInfo::getHugeFolderRatio() const
{
    return hugeFolderRatio_;
}

void MetricInfo::setHugeFolderRatio(const std::string& value)
{
    hugeFolderRatio_ = value;
    hugeFolderRatioIsSet_ = true;
}

bool MetricInfo::hugeFolderRatioIsSet() const
{
    return hugeFolderRatioIsSet_;
}

void MetricInfo::unsethugeFolderRatio()
{
    hugeFolderRatioIsSet_ = false;
}

std::string MetricInfo::getFileDuplicationTotal() const
{
    return fileDuplicationTotal_;
}

void MetricInfo::setFileDuplicationTotal(const std::string& value)
{
    fileDuplicationTotal_ = value;
    fileDuplicationTotalIsSet_ = true;
}

bool MetricInfo::fileDuplicationTotalIsSet() const
{
    return fileDuplicationTotalIsSet_;
}

void MetricInfo::unsetfileDuplicationTotal()
{
    fileDuplicationTotalIsSet_ = false;
}

std::string MetricInfo::getFileDuplicationRatio() const
{
    return fileDuplicationRatio_;
}

void MetricInfo::setFileDuplicationRatio(const std::string& value)
{
    fileDuplicationRatio_ = value;
    fileDuplicationRatioIsSet_ = true;
}

bool MetricInfo::fileDuplicationRatioIsSet() const
{
    return fileDuplicationRatioIsSet_;
}

void MetricInfo::unsetfileDuplicationRatio()
{
    fileDuplicationRatioIsSet_ = false;
}

std::string MetricInfo::getNonHfileDuplicationTotal() const
{
    return nonHfileDuplicationTotal_;
}

void MetricInfo::setNonHfileDuplicationTotal(const std::string& value)
{
    nonHfileDuplicationTotal_ = value;
    nonHfileDuplicationTotalIsSet_ = true;
}

bool MetricInfo::nonHfileDuplicationTotalIsSet() const
{
    return nonHfileDuplicationTotalIsSet_;
}

void MetricInfo::unsetnonHfileDuplicationTotal()
{
    nonHfileDuplicationTotalIsSet_ = false;
}

std::string MetricInfo::getNonHfileDuplicationRatio() const
{
    return nonHfileDuplicationRatio_;
}

void MetricInfo::setNonHfileDuplicationRatio(const std::string& value)
{
    nonHfileDuplicationRatio_ = value;
    nonHfileDuplicationRatioIsSet_ = true;
}

bool MetricInfo::nonHfileDuplicationRatioIsSet() const
{
    return nonHfileDuplicationRatioIsSet_;
}

void MetricInfo::unsetnonHfileDuplicationRatio()
{
    nonHfileDuplicationRatioIsSet_ = false;
}

std::string MetricInfo::getCodeDuplicationTotal() const
{
    return codeDuplicationTotal_;
}

void MetricInfo::setCodeDuplicationTotal(const std::string& value)
{
    codeDuplicationTotal_ = value;
    codeDuplicationTotalIsSet_ = true;
}

bool MetricInfo::codeDuplicationTotalIsSet() const
{
    return codeDuplicationTotalIsSet_;
}

void MetricInfo::unsetcodeDuplicationTotal()
{
    codeDuplicationTotalIsSet_ = false;
}

std::string MetricInfo::getCodeDuplicationRatio() const
{
    return codeDuplicationRatio_;
}

void MetricInfo::setCodeDuplicationRatio(const std::string& value)
{
    codeDuplicationRatio_ = value;
    codeDuplicationRatioIsSet_ = true;
}

bool MetricInfo::codeDuplicationRatioIsSet() const
{
    return codeDuplicationRatioIsSet_;
}

void MetricInfo::unsetcodeDuplicationRatio()
{
    codeDuplicationRatioIsSet_ = false;
}

std::string MetricInfo::getNonHfileCodeDuplicationTotal() const
{
    return nonHfileCodeDuplicationTotal_;
}

void MetricInfo::setNonHfileCodeDuplicationTotal(const std::string& value)
{
    nonHfileCodeDuplicationTotal_ = value;
    nonHfileCodeDuplicationTotalIsSet_ = true;
}

bool MetricInfo::nonHfileCodeDuplicationTotalIsSet() const
{
    return nonHfileCodeDuplicationTotalIsSet_;
}

void MetricInfo::unsetnonHfileCodeDuplicationTotal()
{
    nonHfileCodeDuplicationTotalIsSet_ = false;
}

std::string MetricInfo::getNonHfileCodeDuplicationRatio() const
{
    return nonHfileCodeDuplicationRatio_;
}

void MetricInfo::setNonHfileCodeDuplicationRatio(const std::string& value)
{
    nonHfileCodeDuplicationRatio_ = value;
    nonHfileCodeDuplicationRatioIsSet_ = true;
}

bool MetricInfo::nonHfileCodeDuplicationRatioIsSet() const
{
    return nonHfileCodeDuplicationRatioIsSet_;
}

void MetricInfo::unsetnonHfileCodeDuplicationRatio()
{
    nonHfileCodeDuplicationRatioIsSet_ = false;
}

std::string MetricInfo::getUnsafeFunctionsTotal() const
{
    return unsafeFunctionsTotal_;
}

void MetricInfo::setUnsafeFunctionsTotal(const std::string& value)
{
    unsafeFunctionsTotal_ = value;
    unsafeFunctionsTotalIsSet_ = true;
}

bool MetricInfo::unsafeFunctionsTotalIsSet() const
{
    return unsafeFunctionsTotalIsSet_;
}

void MetricInfo::unsetunsafeFunctionsTotal()
{
    unsafeFunctionsTotalIsSet_ = false;
}

std::string MetricInfo::getUnsafeFunctionsKloc() const
{
    return unsafeFunctionsKloc_;
}

void MetricInfo::setUnsafeFunctionsKloc(const std::string& value)
{
    unsafeFunctionsKloc_ = value;
    unsafeFunctionsKlocIsSet_ = true;
}

bool MetricInfo::unsafeFunctionsKlocIsSet() const
{
    return unsafeFunctionsKlocIsSet_;
}

void MetricInfo::unsetunsafeFunctionsKloc()
{
    unsafeFunctionsKlocIsSet_ = false;
}

std::string MetricInfo::getRedundantCodeTotal() const
{
    return redundantCodeTotal_;
}

void MetricInfo::setRedundantCodeTotal(const std::string& value)
{
    redundantCodeTotal_ = value;
    redundantCodeTotalIsSet_ = true;
}

bool MetricInfo::redundantCodeTotalIsSet() const
{
    return redundantCodeTotalIsSet_;
}

void MetricInfo::unsetredundantCodeTotal()
{
    redundantCodeTotalIsSet_ = false;
}

std::string MetricInfo::getRedundantCodeKloc() const
{
    return redundantCodeKloc_;
}

void MetricInfo::setRedundantCodeKloc(const std::string& value)
{
    redundantCodeKloc_ = value;
    redundantCodeKlocIsSet_ = true;
}

bool MetricInfo::redundantCodeKlocIsSet() const
{
    return redundantCodeKlocIsSet_;
}

void MetricInfo::unsetredundantCodeKloc()
{
    redundantCodeKlocIsSet_ = false;
}

std::string MetricInfo::getWarningSuppressionTotal() const
{
    return warningSuppressionTotal_;
}

void MetricInfo::setWarningSuppressionTotal(const std::string& value)
{
    warningSuppressionTotal_ = value;
    warningSuppressionTotalIsSet_ = true;
}

bool MetricInfo::warningSuppressionTotalIsSet() const
{
    return warningSuppressionTotalIsSet_;
}

void MetricInfo::unsetwarningSuppressionTotal()
{
    warningSuppressionTotalIsSet_ = false;
}

std::string MetricInfo::getWarningSuppressionKloc() const
{
    return warningSuppressionKloc_;
}

void MetricInfo::setWarningSuppressionKloc(const std::string& value)
{
    warningSuppressionKloc_ = value;
    warningSuppressionKlocIsSet_ = true;
}

bool MetricInfo::warningSuppressionKlocIsSet() const
{
    return warningSuppressionKlocIsSet_;
}

void MetricInfo::unsetwarningSuppressionKloc()
{
    warningSuppressionKlocIsSet_ = false;
}

}
}
}
}
}


