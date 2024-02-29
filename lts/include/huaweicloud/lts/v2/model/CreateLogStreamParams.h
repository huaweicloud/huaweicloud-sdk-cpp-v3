
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamParams_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 创建日志流参数。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogStreamParams
    : public ModelBase
{
public:
    CreateLogStreamParams();
    virtual ~CreateLogStreamParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogStreamParams members

    /// <summary>
    /// 需要创建的日志流名称。
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// 日志存储时间 说明： 该参数仅对华东-上海一、华北-北京四、华南-广州用户开放。
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

    /// <summary>
    /// 日志流名称别名
    /// </summary>

    std::string getLogStreamNameAlias() const;
    bool logStreamNameAliasIsSet() const;
    void unsetlogStreamNameAlias();
    void setLogStreamNameAlias(const std::string& value);

    /// <summary>
    /// 企业项目名称 &gt;只能由中文、英文字母、数字、下划线、中划线组成，且不能使用任何大小写形式的“default”； 描述不超过512个字符。
    /// </summary>

    std::string getEnterpriseProjectName() const;
    bool enterpriseProjectNameIsSet() const;
    void unsetenterpriseProjectName();
    void setEnterpriseProjectName(const std::string& value);


protected:
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    std::vector<TagsBody> tags_;
    bool tagsIsSet_;
    std::string logStreamNameAlias_;
    bool logStreamNameAliasIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamParams_H_
