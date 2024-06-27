
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceSet_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceSet_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  ServiceSet
    : public ModelBase
{
public:
    ServiceSet();
    virtual ~ServiceSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceSet members

    /// <summary>
    /// 服务组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 服务组类型，0表示自定义服务组，1表示常用WEB服务，2表示常用远程登录和PING，3表示常用数据库
    /// </summary>

    int32_t getServiceSetType() const;
    bool serviceSetTypeIsSet() const;
    void unsetserviceSetType();
    void setServiceSetType(int32_t value);

    /// <summary>
    /// 引用次数
    /// </summary>

    int32_t getRefCount() const;
    bool refCountIsSet() const;
    void unsetrefCount();
    void setRefCount(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 协议类型列表
    /// </summary>

    std::vector<int32_t>& getProtocols();
    bool protocolsIsSet() const;
    void unsetprotocols();
    void setProtocols(std::vector<int32_t> value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t serviceSetType_;
    bool serviceSetTypeIsSet_;
    int32_t refCount_;
    bool refCountIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<int32_t> protocols_;
    bool protocolsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceSet_H_
