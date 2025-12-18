
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CategorySuggestions_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CategorySuggestions_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 各项内容审核结果。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CategorySuggestions
    : public ModelBase
{
public:
    CategorySuggestions();
    virtual ~CategorySuggestions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CategorySuggestions members

    /// <summary>
    /// 政治人物审核。
    /// </summary>

    std::string getPolitics() const;
    bool politicsIsSet() const;
    void unsetpolitics();
    void setPolitics(const std::string& value);

    /// <summary>
    /// 暴恐内容审核。
    /// </summary>

    std::string getTerrorism() const;
    bool terrorismIsSet() const;
    void unsetterrorism();
    void setTerrorism(const std::string& value);

    /// <summary>
    /// 情色内容审核。
    /// </summary>

    std::string getPorn() const;
    bool pornIsSet() const;
    void unsetporn();
    void setPorn(const std::string& value);


protected:
    std::string politics_;
    bool politicsIsSet_;
    std::string terrorism_;
    bool terrorismIsSet_;
    std::string porn_;
    bool pornIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CategorySuggestions_H_
