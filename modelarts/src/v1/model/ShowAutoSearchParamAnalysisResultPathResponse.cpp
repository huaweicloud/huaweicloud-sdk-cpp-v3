

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchParamAnalysisResultPathResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchParamAnalysisResultPathResponse::ShowAutoSearchParamAnalysisResultPathResponse()
{
    filePath_ = "";
    filePathIsSet_ = false;
}

ShowAutoSearchParamAnalysisResultPathResponse::~ShowAutoSearchParamAnalysisResultPathResponse() = default;

void ShowAutoSearchParamAnalysisResultPathResponse::validate()
{
}

web::json::value ShowAutoSearchParamAnalysisResultPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool ShowAutoSearchParamAnalysisResultPathResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    return ok;
}


std::string ShowAutoSearchParamAnalysisResultPathResponse::getFilePath() const
{
    return filePath_;
}

void ShowAutoSearchParamAnalysisResultPathResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowAutoSearchParamAnalysisResultPathResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowAutoSearchParamAnalysisResultPathResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


