
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_TagsVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_TagsVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  TagsVO
    : public ModelBase
{
public:
    TagsVO();
    virtual ~TagsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagsVO members

    /// <summary>
    /// 规则id
    /// </summary>

    std::string getTagId() const;
    bool tagIdIsSet() const;
    void unsettagId();
    void setTagId(const std::string& value);

    /// <summary>
    /// 规则标签键
    /// </summary>

    std::string getTagKey() const;
    bool tagKeyIsSet() const;
    void unsettagKey();
    void setTagKey(const std::string& value);

    /// <summary>
    /// 规则标签值
    /// </summary>

    std::string getTagValue() const;
    bool tagValueIsSet() const;
    void unsettagValue();
    void setTagValue(const std::string& value);


protected:
    std::string tagId_;
    bool tagIdIsSet_;
    std::string tagKey_;
    bool tagKeyIsSet_;
    std::string tagValue_;
    bool tagValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_TagsVO_H_
