
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_SourceIp_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_SourceIp_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  SourceIp
    : public ModelBase
{
public:
    SourceIp();
    virtual ~SourceIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SourceIp members

    /// <summary>
    /// 数据中心
    /// </summary>

    std::string getDataCenter() const;
    bool dataCenterIsSet() const;
    void unsetdataCenter();
    void setDataCenter(const std::string& value);

    /// <summary>
    /// 线路
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// 实例ip
    /// </summary>

    std::vector<std::string>& getIp();
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::vector<std::string>& value);


protected:
    std::string dataCenter_;
    bool dataCenterIsSet_;
    std::string isp_;
    bool ispIsSet_;
    std::vector<std::string> ip_;
    bool ipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_SourceIp_H_
