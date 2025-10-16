
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceItem_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceItem_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowStatusInstanceItem_instance_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusInstanceItem
    : public ModelBase
{
public:
    ShowStatusInstanceItem();
    virtual ~ShowStatusInstanceItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusInstanceItem members

    /// <summary>
    /// 实例列表
    /// </summary>

    std::vector<ShowStatusInstanceItem_instance_list>& getInstanceList();
    bool instanceListIsSet() const;
    void unsetinstanceList();
    void setInstanceList(const std::vector<ShowStatusInstanceItem_instance_list>& value);

    /// <summary>
    /// 采集时间，UNIX时间戳，单位毫秒
    /// </summary>

    int32_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int32_t value);


protected:
    std::vector<ShowStatusInstanceItem_instance_list> instanceList_;
    bool instanceListIsSet_;
    int32_t timestamp_;
    bool timestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceItem_H_
