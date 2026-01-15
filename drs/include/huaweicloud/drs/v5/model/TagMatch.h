
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TagMatch_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TagMatch_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签匹配信息体.
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TagMatch
    : public ModelBase
{
public:
    TagMatch();
    virtual ~TagMatch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagMatch members

    /// <summary>
    /// 键，例如键值对{“aaa”:\&quot;bbb\&quot;}的key为\&quot;aaa\&quot;
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值，例如键值对{“aaa”:\&quot;bbb\&quot;}的value为\&quot;bbb\&quot;
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TagMatch_H_
