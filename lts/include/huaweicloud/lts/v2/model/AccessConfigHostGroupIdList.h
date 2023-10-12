
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigHostGroupIdList_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigHostGroupIdList_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入主机组ID列表
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigHostGroupIdList
    : public ModelBase
{
public:
    AccessConfigHostGroupIdList();
    virtual ~AccessConfigHostGroupIdList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessConfigHostGroupIdList members

    /// <summary>
    /// 主机组ID列表
    /// </summary>

    std::vector<std::string>& getHostGroupIdList();
    bool hostGroupIdListIsSet() const;
    void unsethostGroupIdList();
    void setHostGroupIdList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> hostGroupIdList_;
    bool hostGroupIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigHostGroupIdList_H_
