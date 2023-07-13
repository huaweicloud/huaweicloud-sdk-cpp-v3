
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Packet_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Packet_H_

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
class HUAWEICLOUD_CFW_V1_EXPORT  Packet
    : public ModelBase
{
public:
    Packet();
    virtual ~Packet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Packet members

    /// <summary>
    /// 十六进制码
    /// </summary>

    std::string getHexIndex() const;
    bool hexIndexIsSet() const;
    void unsethexIndex();
    void setHexIndex(const std::string& value);

    /// <summary>
    /// utf8字符串
    /// </summary>

    std::string getUtf8String() const;
    bool utf8StringIsSet() const;
    void unsetutf8String();
    void setUtf8String(const std::string& value);

    /// <summary>
    /// 十六进制单个字节码数组
    /// </summary>

    std::vector<std::string>& getHexs();
    bool hexsIsSet() const;
    void unsethexs();
    void setHexs(const std::vector<std::string>& value);


protected:
    std::string hexIndex_;
    bool hexIndexIsSet_;
    std::string utf8String_;
    bool utf8StringIsSet_;
    std::vector<std::string> hexs_;
    bool hexsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Packet_H_
