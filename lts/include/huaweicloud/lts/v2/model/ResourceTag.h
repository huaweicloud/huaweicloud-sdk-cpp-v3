
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ResourceTag_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ResourceTag_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ResourceTag
    : public ModelBase
{
public:
    ResourceTag();
    virtual ~ResourceTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceTag members

    /// <summary>
    /// 标签的key
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签的value
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 是否启用日志流标签
    /// </summary>

    std::string getTagsToStreamsEnable() const;
    bool tagsToStreamsEnableIsSet() const;
    void unsettagsToStreamsEnable();
    void setTagsToStreamsEnable(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string tagsToStreamsEnable_;
    bool tagsToStreamsEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ResourceTag_H_
