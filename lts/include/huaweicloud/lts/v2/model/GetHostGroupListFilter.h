
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListFilter_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListFilter_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/GetHostGroupListTag.h>
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
/// 主机组过滤参数
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetHostGroupListFilter
    : public ModelBase
{
public:
    GetHostGroupListFilter();
    virtual ~GetHostGroupListFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetHostGroupListFilter members

    /// <summary>
    /// 主机组类型。windows：windows类型，linux：linux类型
    /// </summary>

    std::string getHostGroupType() const;
    bool hostGroupTypeIsSet() const;
    void unsethostGroupType();
    void setHostGroupType(const std::string& value);

    /// <summary>
    /// 主机组名称列表。
    /// </summary>

    std::vector<std::string>& getHostGroupNameList();
    bool hostGroupNameListIsSet() const;
    void unsethostGroupNameList();
    void setHostGroupNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 主机名称列表。
    /// </summary>

    std::vector<std::string>& getHostNameList();
    bool hostNameListIsSet() const;
    void unsethostNameList();
    void setHostNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    GetHostGroupListTag getHostGroupTag() const;
    bool hostGroupTagIsSet() const;
    void unsethostGroupTag();
    void setHostGroupTag(const GetHostGroupListTag& value);


protected:
    std::string hostGroupType_;
    bool hostGroupTypeIsSet_;
    std::vector<std::string> hostGroupNameList_;
    bool hostGroupNameListIsSet_;
    std::vector<std::string> hostNameList_;
    bool hostNameListIsSet_;
    GetHostGroupListTag hostGroupTag_;
    bool hostGroupTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListFilter_H_
