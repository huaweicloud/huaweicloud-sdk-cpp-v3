
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_QuerySessionResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_QuerySessionResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会话详细信息列表。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  QuerySessionResponse
    : public ModelBase
{
public:
    QuerySessionResponse();
    virtual ~QuerySessionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuerySessionResponse members

    /// <summary>
    /// 会话ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 当前会话是否活跃。 取值为“true”，表示活跃。 取值为“false”，表示不活跃。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);

    /// <summary>
    /// 操作。
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 操作类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 运行时间，单位为 us。
    /// </summary>

    std::string getCostTime() const;
    bool costTimeIsSet() const;
    void unsetcostTime();
    void setCostTime(const std::string& value);

    /// <summary>
    /// 执行计划描述。
    /// </summary>

    std::string getPlanSummary() const;
    bool planSummaryIsSet() const;
    void unsetplanSummary();
    void setPlanSummary(const std::string& value);

    /// <summary>
    /// 主机。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// 客户端地址。
    /// </summary>

    std::string getClient() const;
    bool clientIsSet() const;
    void unsetclient();
    void setClient(const std::string& value);

    /// <summary>
    /// 连接描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 命名空间。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 正在操作的数据库名称。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// 用户名称。仅支持4.2及以上版本,如果无法显示该字段，请升级内核版本。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    bool active_;
    bool activeIsSet_;
    std::string operation_;
    bool operationIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string costTime_;
    bool costTimeIsSet_;
    std::string planSummary_;
    bool planSummaryIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string client_;
    bool clientIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_QuerySessionResponse_H_
