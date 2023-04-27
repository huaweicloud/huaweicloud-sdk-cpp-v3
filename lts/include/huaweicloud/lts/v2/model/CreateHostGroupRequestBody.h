
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateHostGroupRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateHostGroupRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/HostGroupTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建主机组请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateHostGroupRequestBody
    : public ModelBase
{
public:
    CreateHostGroupRequestBody();
    virtual ~CreateHostGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateHostGroupRequestBody members

    /// <summary>
    /// 主机组名称
    /// </summary>

    std::string getHostGroupName() const;
    bool hostGroupNameIsSet() const;
    void unsethostGroupName();
    void setHostGroupName(const std::string& value);

    /// <summary>
    /// 主机组类型。windows：windows类型，linux：linux类型
    /// </summary>

    std::string getHostGroupType() const;
    bool hostGroupTypeIsSet() const;
    void unsethostGroupType();
    void setHostGroupType(const std::string& value);

    /// <summary>
    /// 主机组ID列表。主机类型必须与主机组类型一致
    /// </summary>

    std::vector<std::string>& getHostIdList();
    bool hostIdListIsSet() const;
    void unsethostIdList();
    void setHostIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 标签信息。KEY不能重复
    /// </summary>

    std::vector<HostGroupTag>& getHostGroupTag();
    bool hostGroupTagIsSet() const;
    void unsethostGroupTag();
    void setHostGroupTag(const std::vector<HostGroupTag>& value);


protected:
    std::string hostGroupName_;
    bool hostGroupNameIsSet_;
    std::string hostGroupType_;
    bool hostGroupTypeIsSet_;
    std::vector<std::string> hostIdList_;
    bool hostIdListIsSet_;
    std::vector<HostGroupTag> hostGroupTag_;
    bool hostGroupTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateHostGroupRequestBody_H_
