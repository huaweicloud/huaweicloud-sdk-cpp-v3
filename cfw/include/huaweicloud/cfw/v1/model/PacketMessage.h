
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_PacketMessage_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_PacketMessage_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  PacketMessage
    : public ModelBase
{
public:
    PacketMessage();
    virtual ~PacketMessage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PacketMessage members

    /// <summary>
    /// 16进制index
    /// </summary>

    std::string getHexIndex() const;
    bool hexIndexIsSet() const;
    void unsethexIndex();
    void setHexIndex(const std::string& value);

    /// <summary>
    /// 16进制数列
    /// </summary>

    std::vector<std::string>& getHexs();
    bool hexsIsSet() const;
    void unsethexs();
    void setHexs(const std::vector<std::string>& value);

    /// <summary>
    /// utf_8字符串
    /// </summary>

    std::string getUtf8String() const;
    bool utf8StringIsSet() const;
    void unsetutf8String();
    void setUtf8String(const std::string& value);


protected:
    std::string hexIndex_;
    bool hexIndexIsSet_;
    std::vector<std::string> hexs_;
    bool hexsIsSet_;
    std::string utf8String_;
    bool utf8StringIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_PacketMessage_H_
