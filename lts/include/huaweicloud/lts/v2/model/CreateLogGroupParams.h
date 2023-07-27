
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogGroupParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogGroupParams_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/lts/v2/model/TagsBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建日志组参数。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogGroupParams
    : public ModelBase
{
public:
    CreateLogGroupParams();
    virtual ~CreateLogGroupParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateLogGroupParams members

    /// <summary>
    /// 需要创建的日志组名称。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志存储时间（天），取值范围：1-30。
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);

    /// <summary>
    /// 标签字段信息
    /// </summary>

    std::vector<TagsBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsBody>& value);


protected:
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    std::vector<TagsBody> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogGroupParams_H_
