
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MockInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MockInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MockInfo
    : public ModelBase
{
public:
    MockInfo();
    virtual ~MockInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MockInfo members

    /// <summary>
    /// mock id
    /// </summary>

    std::string getMockId() const;
    bool mockIdIsSet() const;
    void unsetmockId();
    void setMockId(const std::string& value);

    /// <summary>
    /// mock开关
    /// </summary>

    bool isMockSwitch() const;
    bool mockSwitchIsSet() const;
    void unsetmockSwitch();
    void setMockSwitch(bool value);

    /// <summary>
    /// mock url
    /// </summary>

    std::string getMockUrl() const;
    bool mockUrlIsSet() const;
    void unsetmockUrl();
    void setMockUrl(const std::string& value);


protected:
    std::string mockId_;
    bool mockIdIsSet_;
    bool mockSwitch_;
    bool mockSwitchIsSet_;
    std::string mockUrl_;
    bool mockUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MockInfo_H_
