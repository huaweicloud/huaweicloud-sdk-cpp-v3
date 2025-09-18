
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueItemSfV4_story_point_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueItemSfV4_story_point_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// id 值， 1 &#39;0&#39;， 2 &#39;1/2&#39;， 3 &#39;1&#39; ， 4 &#39;2&#39; ， 5 &#39;3&#39; ， 6 &#39;5&#39; ， 7 &#39;8&#39; ， 8 &#39;13&#39; ， 9 &#39;21&#39; ， 10 &#39;40&#39; ， 11 &#39;80&#39; ， 12 &#39;100&#39; ， 13 &#39;∞&#39; ， 14 &#39;?&#39; ，
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueItemSfV4_story_point
    : public ModelBase
{
public:
    IssueItemSfV4_story_point();
    virtual ~IssueItemSfV4_story_point();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueItemSfV4_story_point members

    /// <summary>
    /// 故事点id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 故事点
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueItemSfV4_story_point_H_
