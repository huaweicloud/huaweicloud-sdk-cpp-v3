
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListServiceSetsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListServiceSetsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListServiceSetsRequest
    : public ModelBase
{
public:
    ListServiceSetsRequest();
    virtual ~ListServiceSetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServiceSetsRequest members

    /// <summary>
    /// 互联网边界防护对象id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)，type为0的为互联网边界防护对象id。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 每页查询个数，范围为1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量：指定返回记录的开始位置，必须为数字，取值范围为大于或等于0，默认0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)，默认情况下，fw_instance_Id为空时，返回账号下第一个墙的信息；fw_instance_Id非空时，返回与fw_instance_Id对应墙的信息。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 查询服务组类型，0表示自定义服务组，1表示预定义服务组
    /// </summary>

    int32_t getQueryServiceSetType() const;
    bool queryServiceSetTypeIsSet() const;
    void unsetqueryServiceSetType();
    void setQueryServiceSetType(int32_t value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t queryServiceSetType_;
    bool queryServiceSetTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListServiceSetsRequest& dereference_from_shared_ptr(std::shared_ptr<ListServiceSetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListServiceSetsRequest_H_
