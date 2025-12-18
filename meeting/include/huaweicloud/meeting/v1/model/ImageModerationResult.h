
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ImageModerationResult_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ImageModerationResult_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/CategorySuggestions.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 图片审核结果。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ImageModerationResult
    : public ModelBase
{
public:
    ImageModerationResult();
    virtual ~ImageModerationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageModerationResult members

    /// <summary>
    /// 审核情况。
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CategorySuggestions getCategorySuggestions() const;
    bool categorySuggestionsIsSet() const;
    void unsetcategorySuggestions();
    void setCategorySuggestions(const CategorySuggestions& value);


protected:
    std::string suggestion_;
    bool suggestionIsSet_;
    CategorySuggestions categorySuggestions_;
    bool categorySuggestionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ImageModerationResult_H_
